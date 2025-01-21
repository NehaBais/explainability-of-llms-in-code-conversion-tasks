#include <stdio.<｜begin▁of▁sentence｜>
#include <sys/stat.h>

void create(const char *directory) {
  FILE *file;

  // Create an empty text file "output.txt"
  if (fopen_s(&file, directory[0] == '.'
                         ? "./output.txt"
                         : "C:/Users/<Your-Username>/Desktop/output.txt") ==
      0) {
    fclose(file);
  } else {
    printf("Failed to create output.txt");
  }

  // Create an empty directory "docs"
  if (mkdir(directory[0] == '.'
                ? "./docs"
                : "C:/Users/<Your-Username>/Desktop/docs") != 0) {
    printf("Failed to create docs directory");
  }
}

int main() {
  create("."); // current directory
  create("/"); // root directory not available in windows, so we need to provide
               // an absolute path instead. e.g., "C:/" or "file:///" etc.

  return 0;
}