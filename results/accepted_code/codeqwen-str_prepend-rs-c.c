#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *s = "World";
  char *str_literal = "Hello ";
  char *result;

  // Calculate new length and allocate memory for the result string
  size_t total_length = strlen(str_literal) + strlen(s);
  result = (char *)malloc(total_length + 1);

  // Copy str_literal to result
  strcpy(result, str_literal);

  // Append s to result
  strcat(result, s);

  printf("%s\n", result);
  free(result);

  return 0;
}