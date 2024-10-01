#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

int mkdir_p(const char *dir, mode_t mode) {
  char *copy = strdup(
      dir); // We need a mutable string copy of dir for the following code
  char *token = strtok(copy, "/");

  while (token != NULL) {
    // Create each directory in path sequentially. If one fails, stop and return
    // error
    if (mkdir(dir, mode) == -1 && errno != EEXIST) {
      free(copy); // Don't forget to free the copied string!
      return -1;
    }
    token = strtok(NULL, "/");
  }

  // Now that we have created all subdirectories in path, create the directory
  // at the end of it.
  int result = mkdir(dir, mode);
  free(copy); // Don't forget to free the copied string!
  return result;
}