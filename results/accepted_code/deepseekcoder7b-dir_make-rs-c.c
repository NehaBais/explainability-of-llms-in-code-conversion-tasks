#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>

int mkdir_p(const char *path) {
  struct stat st;
  int status = 0;

  if (stat(path, &st) != 0) {
    if (mkdir(path, 0755) == -1) {
      perror("Error creating directory");
      return 2; // something went wrong with mkdir
    }
  } else if (!S_ISDIR(st.st_mode)) {
    fprintf(stderr, "Path '%s' exists but is not a directory\n", path);
    return 1; // parent isn't dir or such path doesn't exist
  }

  return status;
}

int main() {
  char *path = "./path/to/dir";
  int result = mkdir_p(path);

  if (result == 0) {
    printf("Directory created successfully\n");
  } else {
    printf("Failed to create directory\n");
  }
}