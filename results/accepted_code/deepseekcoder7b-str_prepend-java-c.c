#include <stdio.h>
#include <string.h>

int main(void) {
  char string[] = "def";

  // prepend with another string literal
  strncat(string, "abc", sizeof(string));

  printf("%s\n", string);
  return 0;
}