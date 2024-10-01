#include <stdio.h>
#include <unistd.h> // for rename()

int main() {
  if (rename("input.txt", "output.txt") != 0 || rename("docs", "mydocs") != 0 ||
      rename("/input.txt", "/output.txt") != 0 ||
      rename("/docs", "/mydocs") != 0) {
    perror("rename"); // If there was an error, this will print it to stderr
  }
  return 0;
}