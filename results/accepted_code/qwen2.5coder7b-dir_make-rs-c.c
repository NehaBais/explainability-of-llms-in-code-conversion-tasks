#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

// Function to check if directory exists or not
int dirExists(const char *dirPath) {
  struct stat st;
  if (stat(dirPath, &st) == 0 && S_ISDIR(st.st_mode)) {
    return 1; // Directory exists
  } else {
    return 0; // Directory does not exist
  }
}

// Function to create directory and any missing parents
void mkpath(const char *dirPath) {
  size_t len = strlen(dirPath);
  char path[len + 1];

  snprintf(path, len + 1, "%s", dirPath);

  for (size_t i = 0; i < len; ++i) {
    if (path[i] == '/' && !dirExists(path)) {
      path[i] = '\0';
      mkdir(path, 0755);
      path[i] = '/';
    }
  }

  if (!dirExists(path)) {
    mkdir(path, 0755);
  }
}

int main() {
  const char *dirPath = "./path/to/dir";
  mkpath(dirPath);
  printf("Directory created successfully\n");
  return 0;
}