#include <stdio.h>

int main() {
  FILE *f = fopen("output.txt", "w");
  if (f == NULL) {
    printf("Failed to create file\n");
    return -1;
  }
  fclose(f);

  // Repeat the same operation for "/output.txt"
  FILE *g = fopen("/output.txt", "w");
  if (g == NULL) {
    printf("Failed to create file in root directory\n");
    return -1;
  }
  fclose(g);

  // Unfortunately, C does not have a standard way of creating directories.
  // You would typically use system-specific commands or functions here.
  // For example, on Unix systems like Linux and MacOS you could use system() to
  // run mkdir command:
  // system("mkdir docs");
  // system("sudo mkdir /docs");  // for root directory
  return 0;
}