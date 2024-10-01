#include <stdio.h>
#include <string.h>

int main() {
  char s[9] = "12345678";
  strcpy(s, "0" + s); // by concatenation
  printf("%s\n", s);
  return 0;
}