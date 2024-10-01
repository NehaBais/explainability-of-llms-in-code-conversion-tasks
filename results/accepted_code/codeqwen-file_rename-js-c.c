#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  if (rename("input.txt", "output.txt") == -1) {
    perror("Error renaming input.txt");
    return EXIT_FAILURE;
  }

  if (chdir("/") == -1) {
    perror("Error changing directory to /");
    return EXIT_FAILURE;
  }

  if (rename("c:/input.txt", "c:/output.txt") == -1) {
    perror("Error renaming c:/input.txt");
    return EXIT_FAILURE;
  }

  if (chdir("/path/to/docs") == -1) {
    perror("Error changing directory to /path/to/docs");
    return EXIT_FAILURE;
  }

  if (rename("docs", "mydocs") == -1) {
    perror("Error renaming docs");
    return EXIT_FAILURE;
  }

  if (chdir("/path/to/c:/docs") == -1) {
    perror("Error changing directory to /path/to/c:/docs");
    return EXIT_FAILURE;
  }

  if (rename("c:/docs", "c:/mydocs") == -1) {
    perror("Error renaming c:/docs");
    return EXIT_FAILURE;
  }

  printf("Files and directories successfully moved\n");
  return EXIT_SUCCESS;
}