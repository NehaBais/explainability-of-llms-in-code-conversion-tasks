#include <stdio.h>
#include <unistd.h>

int main() {
  if (mkdir("/mydocs", 0755) == -1) {
    perror("Error creating directory");
    return 1;
  }

  if (rename("input.txt", "/mydocs/output.txt") == -1) {
    perror("Error moving file");
    return 1;
  }

  rmdir("/docs");

  return 0;
}