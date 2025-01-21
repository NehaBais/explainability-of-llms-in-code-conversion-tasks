#include <stdio.h>

int main(void) {
  FILE *file_a = fopen("file_a.txt", "r");
  if (file_a == NULL) {
    printf("Error opening file_a.txt\n");
    return 1;
  }

  fseek(file_a, 0, SEEK_END);
  long file_a_size = ftell(file_a);
  rewind(file_a);

  FILE *file_b = fopen("file_b.txt", "r");
  if (file_b == NULL) {
    printf("Error opening file_b.txt\n");
    return 1;
  }

  fseek(file_b, 0, SEEK_END);
  long file_b_size = ftell(file_b);
  rewind(file_b);

  printf("File size of file_a: %ld bytes\n", file_a_size);
  printf("File size of file_b: %ld bytes\n", file_b_size);

  fclose(file_a);
  fclose(file_b);

  return 0;
}