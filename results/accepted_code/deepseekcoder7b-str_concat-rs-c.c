#include <stdio.h>
#include <string.h>
int main() {
  // Create a char array or string variable equal to any text value
  char s[] = "hello";

  // Show content of the variables
  printf("%s\n", s);

  // Concatenate original variable with another string literal.
  strncat(s, " world", sizeof(s) - strlen(s) - 1);

  // Show content after concatenation
  printf("%s\n", s);
}