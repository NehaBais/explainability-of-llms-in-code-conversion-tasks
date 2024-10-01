#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

void mkdirp(const char *path) {
  const char *p = path;
  struct stat sb;

  while (*p && p != NULL) {
    // Advance to the next slash or end of string
    while (*p && *p != '/')
      p++;

    // Copy up to but not including the slash into a temporary buffer
    char buffer[1024];
    strncpy(buffer, path, p - path);
    buffer[p - path] = '\0';

    if (buffer[strlen(buffer) - 1] == '/') {
      buffer[strlen(buffer) - 1] = '\0'; // Remove trailing slash if present
    }

    // Check if directory exists, create it if not
    if (stat(buffer, &sb) != 0 || !S_ISDIR(sb.st_mode)) {
      int result = mkdir(buffer, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
      if (result != 0 && errno != EEXIST) {
        perror("mkdir");
        exit(EXIT_FAILURE);
      }
    }

    // Move to the next component
    p++;
  }
}

int main() {
  const char *path = "./path/to/dir";
  mkdirp(path);

  return 0;
}