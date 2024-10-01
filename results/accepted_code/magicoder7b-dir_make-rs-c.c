#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>

// Create directory and its parent directories if they don't exist
int create_dir(char *path) {
  int i, len;
  char *p = strrchr(
      path, '/'); // Find the last slash in the path (parent directories)

  // If there is no slash, just try to make the directory
  if (!p)
    return mkdir(path, 0755);

  *p = '\0'; // Temporarily cut off the child part of the path

  // Recursively create parent directories
  for (i = 1; i <= (int)strlen(path); i++) {
    char temp[1024];

    strncpy(temp, path, i);
    temp[i] = '\0';

    // If the directory does not exist, create it
    if ((stat(temp, &st) == -1 || !S_ISDIR(st.st_mode))) {
      int ret;

      if ((ret = mkdir(temp, 0755)) < 0 &&
          errno != EEXIST) { // If it's an error but not already exists, return
                             // with -1
        printf("Failed to create directory %s: %s\n", temp, strerror(errno));
        return -1;
      }
    }
  }

  *p = '/'; // Restore the path (create the child dir)

  if ((stat(path, &st) == -1 ||
       !S_ISDIR(
           st.st_mode))) { // If the final directory does not exist, create it
    int ret;

    if ((ret = mkdir(path, 0755)) < 0 &&
        errno !=
            EEXIST) { // If it's an error but not already exists, return with -1
      printf("Failed to create directory %s: %s\n", path, strerror(errno));
      return -1;
    }
  }

  return 0; // Everything went fine
}