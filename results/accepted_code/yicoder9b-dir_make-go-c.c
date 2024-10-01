#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

int mkdir_p(const char *dir, mode_t mode) {
  char *copy = strdup(dir); // We need to be able to modify the string
  char *token = strtok(copy, "/");

  do {
    if (mkdir(dir, mode) == -1) {
      // If already exists or an error occurred, break.
      if (errno == EEXIST || errno == EACCES)
        break;
      else
        return -1; // Return -1 if there's any other kind of error
    }
  } while ((token = strtok(NULL, "/")) && (dir = token));

  free(copy);
  return 0;
}

int main() {
  if (mkdir_p("/tmp/some/path/to/dir", 0770) == -1) {
    perror("Failed to create directories.");
    // Handle error case as you need
  } else {
    printf("Directories created successfully\n");
  }
}