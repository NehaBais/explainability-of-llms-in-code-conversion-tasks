#include <stdio.h>
#include <string.h>

int main() {
  char s[9] = "12345678";

  // Prepending the string with another literal "0"
  strcpy(s, "0");
  strcat(s, s); // by concatenation

  printf("%s\n", s);

  return 0;
}