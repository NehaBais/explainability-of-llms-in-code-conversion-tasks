#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

void mkdirp(const char *path) {
  char temp_path[256]; // temporary buffer for the path name
  struct stat st;      // struct for file status
  int i, result;
  const char *slash = "";

  strncpy(temp_path, path, sizeof(temp_path) - 1);

  while ((i = strlen(temp_path)) > 0 && stat(temp_path, &st) == 0 &&
         S_ISDIR(st.st_mode)) { // check if exists and is a directory
    temp_path[i - 1] = '\0';    // remove the existing slash
    slash = "/";
  }

  while (strlen(temp_path) > 0) {
    if ((result = stat(temp_path, &st)) == -1 ||
        !S_ISDIR(st.st_mode)) { // check if exists and is a directory
      if (mkdir((temp_path), 0777) ==
          -1) { // create the directory with default permissions
        perror("mkdir");
        return;
      }
    }
    temp_path[strlen(slash) + strspn(slash, "/\\")] =
        '\0'; // remove trailing slash or backslash
    slash = strchr(slash, '/');
  }
}