#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fct(const char *err_msg) {
  if (err_msg != NULL) {
    fprintf(stderr, "%s\n", err_msg);
  }
}

int main() {
  // Create file "output.txt" in the current working directory
  FILE *file1 = fopen("output.txt", "w");
  if (file1 == NULL) {
    fct("Error creating file output.txt in current directory");
    return 1;
  }
  fclose(file1);

  // Create file "/output.txt" in the root directory
  FILE *file2 = fopen("/output.txt", "w");
  if (file2 == NULL) {
    fct("Error creating file /output.txt in root directory");
    return 1;
  }
  fclose(file2);

  // Create directory "docs" in the current working directory
  int mkdir_result = mkdir("docs", 0777);
  if (mkdir_result == -1) {
    fct("Error creating directory docs in current directory");
    return 1;
  }

  // Create directory "/docs" in the root directory
  int mkdir_root_result = mkdir("/docs", 0777);
  if (mkdir_root_result == -1) {
    fct("Error creating directory /docs in root directory");
    return 1;
  }

  return 0;
}