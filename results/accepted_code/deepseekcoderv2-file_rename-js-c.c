#include <stdio.h>

int main() {
  FILE *input, *output;
  char filename[100];

  // Rename "input.txt" to "output.txt" in the current directory
  strcpy(filename, "input.txt");
  input = fopen(filename, "r");
  if (input == NULL) {
    printf("Error opening file %s\n", filename);
    return -1;
  }
  output = fopen("output.txt", "w");
  if (output == NULL) {
    printf("Error creating new file %s\n", "output.txt");
    fclose(input);
    return -1;
  }
  while (!feof(input)) {
    putc(getc(input), output);
  }
  fclose(input);
  fclose(output);

  // Rename "docs" to "mydocs" in the current directory
  strcpy(filename, "docs");
  if (rename(filename, "mydocs") != 0) {
    printf("Error renaming %s\n", filename);
    return -1;
  }

  // Rename "c:/input.txt" to "c:/output.txt" in the filesystem root
  strcpy(filename, "c:/input.txt");
  input = fopen(filename, "r");
  if (input == NULL) {
    printf("Error opening file %s\n", filename);
    return -1;
  }
  output = fopen("output.txt", "w");
  if (output == NULL) {
    printf("Error creating new file %s\n", "output.txt");
    fclose(input);
    return -1;
  }
  while (!feof(input)) {
    putc(getc(input), output);
  }
  fclose(input);
  fclose(output);

  // Rename "docs" to "mydocs" in the filesystem root
  if (rename("docs", "mydocs") != 0) {
    printf("Error renaming %s\n", "docs");
    return -1;
  }

  return 0;
}