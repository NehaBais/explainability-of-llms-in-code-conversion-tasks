#include <direct.h>
#include <stdio.h>

void create(const char *directory) {
  FILE *file;
  // Create an empty text file "output.txt"
  if (fopen_s(&file, ".\\output.txt", "w") == 0) {
    fclose(file);
  } else {
    printf("Failed to create output.txt");
  }
  // Create an empty directory "docs"
  if (_mkdir(".\\docs") != 0) {
    printf("Failed to create docs directory");
  }
}

int main() {
  create(".");    // current directory
  create("C:\\"); // root directory, must use absolute path in Windows

  return 0;
}