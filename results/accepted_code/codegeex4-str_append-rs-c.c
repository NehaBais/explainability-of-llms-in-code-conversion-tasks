#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *hello =
      (char *)malloc(12 * sizeof(char)); // Allocate memory for "Hello world"
  strcpy(hello, "Hello world");          // Copy string into allocated memory

  // Append the string variable with another string literal
  strcat(hello, "!!!!");

  // Print the contents of the variable after the append operation.
  printf("%s\n", hello);

  free(hello); // Free the allocated memory

  return 0;
}