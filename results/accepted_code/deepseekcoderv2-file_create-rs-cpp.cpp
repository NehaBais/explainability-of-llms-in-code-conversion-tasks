#include <stdio.h>
#include <stdlib.h>

int main() {
  // Create the file
  FILE *file = fopen("output.txt", "w");
  if (file == NULL) {
    printf("Error creating the file.\n");
    return 1;
  }
  fclose(file);

  // Create the directory
  int result = mkdir("docs", 0755);
  if (result != 0) {
    printf("Error creating the directory.\n");
    return 1;
  }

  return 0;
}