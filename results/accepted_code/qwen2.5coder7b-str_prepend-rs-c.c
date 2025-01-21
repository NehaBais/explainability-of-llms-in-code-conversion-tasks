#include <stdio.h>
#include <stdlib.h>

int main() {
  // Create a string variable with any text value
  const char *s = "World";

  // Prepend the string variable with another string literal
  char *result = (char *)malloc(
      12 * sizeof(char)); // Allocate enough space for "Hello World\0"
  snprintf(result, 12, "Hello %s", s);

  // Print the resulting string
  printf("%s\n", result);

  // Free the allocated memory
  free(result);

  return 0;
}