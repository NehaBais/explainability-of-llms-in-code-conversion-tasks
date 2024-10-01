#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

void file_exists(const char *path) {
  struct stat buffer;
  if (stat(path, &buffer) != -1) { // The file exists
    if (S_ISDIR(buffer.st_mode)) { // Check if it's a directory
      printf("%s is a directory\n", path);
    } else {
      printf("%s exists with a size of %d bytes\n", path, buffer.st_size);
    }
  } else { // The file does not exist
    printf("%s does not exist\n", path);
  }
}

int main() {
  file_exists("input.txt");
  // Add here other paths you want to check in the current directory

  file_exists("/docs/input.txt");
  // Add here other paths you want to check at root

  return 0;
}