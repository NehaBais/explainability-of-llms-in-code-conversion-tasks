#include <errno.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>

// Function to check if a file exists
bool is_file(const char *path) {
  struct stat st;
  return (stat(path, &st) == 0 && S_ISREG(st.st_mode));
}

// Function to check if a directory exists
bool is_dir(const char *path) {
  struct stat st;
  return (stat(path, &st) == 0 && S_ISDIR(st.st_mode));
}

int main() {
  // Check for the current working directory
  printf("Checking in current working directory:\n");
  if (is_file("input.txt")) {
    printf("File 'input.txt' exists.\n");
  } else {
    printf("File 'input.txt' does not exist.\n");
  }

  if (is_dir("docs")) {
    printf("Directory 'docs' exists.\n");
  } else {
    printf("Directory 'docs' does not exist.\n");
  }

  // Check for the filesystem root
  printf("\nChecking in filesystem root:\n");
  if (is_file("/input.txt")) {
    printf("File '/input.txt' exists.\n");
  } else {
    printf("File '/input.txt' does not exist.\n");
  }

  if (is_dir("/docs")) {
    printf("Directory '/docs' exists.\n");
  } else {
    printf("Directory '/docs' does not exist.\n");
  }

  return 0;
}