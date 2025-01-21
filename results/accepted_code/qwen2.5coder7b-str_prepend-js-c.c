#include <stdio.h>
#include <string.h>

int main() {
  char *s = ", World";
  char new_s[50]; // Make sure this is large enough to hold both strings

  // Prepend the string variable with another string literal.
  sprintf(new_s, "Hello%s", s);

  printf("%s\n", new_s);

  return 0;
}