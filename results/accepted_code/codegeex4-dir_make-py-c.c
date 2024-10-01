#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

void mkdirp(const char *path) {
  char buffer[1024];
  char *ptr = buffer;
  size_t len;

  /* Copy the path to avoid modifying the input string */
  len = strlen(path);
  if (len >= sizeof(buffer)) {
    ptr = malloc(len + 1); // Allocate memory for dynamic storage
    if (!ptr) {
      fprintf(stderr, "Failed to allocate memory\n");
      return;
    }
    strncpy(ptr, path, len + 1);
  } else {
    strncpy(buffer, path, sizeof(buffer));
  }

  /* Create directories one by one */
  const char *slash = strchr(ptr, '/');
  while (slash) {
    *slash = '\0'; // Null-terminate after the slash to get a directory name
    if (mkdir(ptr, 0755) &&
        errno !=
            EEXIST) { // If it fails and it's not because of an existing dir
      perror("mkdir");
      break;
    }
    *slash = '/'; // Restore slash before next iteration
    slash = strchr(slash + 1, '/');
  }

  /* Create the final directory */
  if (mkdir(path, 0755) && errno != EEXIST) {
    perror("mkdir");
  } else {
    printf("Directory created successfully.\n");
  }

  /* Free allocated memory */
  if (ptr != buffer)
    free(ptr);
}

int main() {
  mkdirp("./path/to/dir");
  return 0;
}