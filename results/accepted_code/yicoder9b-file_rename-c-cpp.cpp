#include <cstdio> //or #include <unistd.h> for POSIX systems

int main() {
  // renaming files in the current working directory
  if (rename("input.txt", "output.txt") == 0) {
    printf("Successfully renamed input.txt to output.txt\n");
  } else {
    printf("Failed to rename input.txt to output.txt\n");
  }

  if (rename("docs", "mydocs") == 0) {
    printf("Successfully renamed docs directory to mydocs\n");
  } else {
    printf("Failed to rename docs directory to mydocs\n");
  }

  // renaming files in the filesystem root (this might require superuser
  // privileges)
  if (rename("/input.txt", "/output.txt") == 0) {
    printf("Successfully renamed /input.txt to /output.txt\n");
  } else {
    printf("Failed to rename /input.txt to /output.txt\n");
  }

  if (rename("/docs", "/mydocs") == 0) {
    printf("Successfully renamed /docs directory to /mydocs\n");
  } else {
    printf("Failed to rename /docs directory to /mydocs\n");
  }

  return 0;
}