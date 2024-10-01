#include <stdio.h>

int main() {
  char *s = "hello";

  printf("%s\n", s); // Output: hello

  char *s2 =
      malloc(strlen(s) + 8); // Allocate memory for the concatenated string
  strcpy(s2, s);             // Copy the original string to the new buffer
  strcat(s2, " literal");    // Concatenate the string with " literal"

  printf("%s\n", s2); // Output: hello literal

  free(s2); // Release the memory allocated for the concatenated string
  return 0;
}