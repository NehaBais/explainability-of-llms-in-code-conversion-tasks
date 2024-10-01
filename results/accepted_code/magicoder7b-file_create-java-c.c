#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fp;

  // Creating a file "output.txt" in current working directory
  if ((fp = fopen("output.txt", "w")) == NULL) {
    printf("Error opening the file.");
    return 0;
  }
  fclose(fp);

  // Creating a directory "docs" in filesystem root (/)
  int result = mkdir("/docs", 0755);
  if (result != 0) {
    printf("Error creating the directory.");
    return 0;
  }

  // Creating a file "output.txt" in filesystem root (/)
  fp = fopen("/output.txt", "w");
  if (fp == NULL) {
    printf("Error opening the file.");
    return 0;
  }
  fclose(fp);

  // Creating a directory "docs" in current working directory
  result = mkdir("docs", 0755);
  if (result != 0) {
    printf("Error creating the directory.");
    return 0;
  }

  return 0;
}