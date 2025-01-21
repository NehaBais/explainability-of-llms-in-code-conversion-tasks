#include <stdio.h>
#include <string.h>

int main() {
  // Initialize the string variable with any text value
  char s[] = "World";

  // Prepend the string with another string literal
  strcat(s, "Hello ");

  // Print the result
  printf("%s\n", s);

  return 0;
}