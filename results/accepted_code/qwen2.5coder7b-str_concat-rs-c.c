#include <stdio.h>
#include <stdlib.h>

int main() {
  // Create a string variable equal to any text value.
  char *s = "hello";
  printf("%s\n", s);

  // Create another string variable whose value is the original variable
  // concatenated with another string literal.
  char buffer[100];
  snprintf(buffer, sizeof(buffer), "%s world", s);
  printf("%s\n", buffer);

  return 0;
}