#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

void create_directory(const char *path) {
  size_t len = strlen(path);
  char *s = malloc((len + 1) * sizeof(char));
  strcpy(s, path);

  // Iterate over each character in the path
  for (size_t i = 0; i < len; ++i) {
    if (s[i] == '/') {
      s[i] = '\0';
      if (mkdir(s, 0770) != 0 && errno != EEXIST) {
        perror("Failed to create directory");
        free(s);
        return;
      }
      s[i] = '/';
    }
  }

  // Create the final directory
  if (mkdir(s, 0770) != 0 && errno != EEXIST) {
    perror("Failed to create directory");
  }

  free(s);
}

int main() {
  const char *path = "/tmp/some/path/to/dir";
  create_directory(path);
  return 0;
}