#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

// Function to create a directory and its parents if they do not exist
void mkdirp(const char *path, void (*callback)(int, const char *)) {
  struct stat st;

  // Check if the path already exists
  if (stat(path, &st) == 0) {
    if (S_ISDIR(st.st_mode)) {
      callback(0, NULL); // Directory already exists
      return;
    } else {
      callback(-1, "Not a directory"); // Path exists but is not a directory
      return;
    }
  }

  // Create parent directories if they do not exist
  char *parent_path = strdup(path);
  char *last_slash = strrchr(parent_path, '/');
  if (last_slash != NULL) {
    *(last_slash + 1) = '\0'; // Null-terminate the parent path string
    mkdirp(parent_path, callback);
    free(parent_path);
  } else {
    free(parent_path);
    callback(-1, "Invalid path");
    return;
  }

  // Try to create the directory
  if (mkdir(path, 0755) == -1) {
    if (errno != EEXIST && errno != ENOENT) {
      callback(-1, strerror(errno));
    } else {
      callback(0, NULL); // Directory creation succeeded or already exists
    }
  } else {
    callback(0, NULL); // Directory created successfully
  }
}

// Example usage
int main() {
  mkdirp("./path/to/dir", [](int err, const char *msg) {
    if (err == -1) {
      fprintf(stderr, "Error: %s\n", msg);
    } else {
      printf("Directory created successfully.\n");
    }
  });
  return 0;
}