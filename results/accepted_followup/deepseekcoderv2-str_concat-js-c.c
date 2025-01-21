#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  // Create a string variable equal to any text value
  char *s = "hello";

  // Create another string variable whose value is the original variable
  // concatenated with another string literal
  char *result = (char *)malloc(strlen(s) + strlen(" there!") + 1);
  strcpy(result, s);
  strcat(result, " there!");

  // To illustrate the operation, show the content of the variables
  printf("%s\n", result);

  // Free allocated memory
  free(result);

  return 0;
}