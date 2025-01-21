#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>

int main() {
  // Create "output.txt" in the current working directory with size 0 bytes.
  if (mkdir("output.txt", S_IRWXU) == -1) {
    perror("Error creating output.txt");
    exit(EXIT_FAILURE);
  }

  // Create "docs" in the current working directory with size 0 bytes.
  if (mkdir("docs", S_IRWXU) == -1) {
    perror("Error creating docs");
    exit(EXIT_FAILURE);
  }

  // Create "output.txt" in the root filesystem with size 0 bytes.
  if (mkdir("/output.txt", S_IRWXU) == -1) {
    perror("Error creating output.txt in root");
    exit(EXIT_FAILURE);
  }

  // Create "docs" in the root filesystem with size 0 bytes.
  if (mkdir("/docs", S_IRWXU) == -1) {
    perror("Error creating docs in root");
    exit(EXIT_FAILURE);
  }

  printf("Directories created successfully.\n");

  return 0;
}