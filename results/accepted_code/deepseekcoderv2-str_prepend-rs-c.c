#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  // Create a string variable equal to any text value.
  char s[] = "World";

  // Prepend the string variable with another string literal.
  char prepend[] = "Hello ";
  size_t len = strlen(prepend);
  memmove(s + len, s, strlen(s) + 1);
  memcpy(s, prepend, len);

  // Print the result.
  printf("%s\n", s);

  return 0;
}