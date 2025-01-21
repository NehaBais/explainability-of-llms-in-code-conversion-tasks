#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void renameFilesAndDirectories(const char *dirPath) {
  if (rename("input.txt", "output.txt") != 0) {
    perror("Error renaming input.txt");
    exit(EXIT_FAILURE);
  }

  if (rename("docs", "mydocs") != 0) {
    perror("Error renaming docs");
    exit(EXIT_FAILURE);
  }
}

int main() {
  // Rename in the current working directory
  renameFilesAndDirectories("");

  // Rename in the filesystem root
  char rootPath[1024];
  if (getcwd(rootPath, sizeof(rootPath)) != NULL) {
    renameFilesAndDirectories(rootPath);
  } else {
    perror("Error getting current working directory");
    exit(EXIT_FAILURE);
  }

  return 0;
}