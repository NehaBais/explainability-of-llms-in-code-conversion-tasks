#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

int main() {
  // Create a new empty file called "output.txt" in the current working
  // directory
  FILE *f = fopen("output.txt", "w");
  if (f == NULL) {
    perror("Error creating output.txt file");
    return 1;
  }
  fclose(f);

  // Create a new empty file called "/output.txt" in the root directory
  FILE *g = fopen("/output.txt", "w");
  if (g == NULL) {
    perror("Error creating /output.txt file");
    return 1;
  }
  fclose(g);

  // Create a new directory called "docs" in the current working directory
  mkdir("docs", 0755);

  // Create a new directory called "/docs" in the root directory
  mkdir("/docs", 0755);

  return 0;
}