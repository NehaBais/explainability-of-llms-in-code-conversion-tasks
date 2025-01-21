#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

int mkdir_p(const char *path) {
  struct stat st;
  int status = 0;

  if (stat(path, &st) != 0) {
    if (mkdir(path, 0755) == -1) {
      perror("Error creating directory");
      return 1;
    }
  } else if (!S_ISDIR(st.st_mode)) {
    errno = ENOTDIR;
    perror("Path exists but is not a directory");
    return 1;
  }

  return status;
}

int main() {
  const char *path =
      "./path/to/dir"; // replace this with your desired directory path
  int result = mkdir_p(path);

  if (result != 0) {
    printf("Failed to create the directory: %s\n", strerror(errno));
    return 1;
  }

  printf("Successfully created directory: %s\n", path);
  return 0;
}