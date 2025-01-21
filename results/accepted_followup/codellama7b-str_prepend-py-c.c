#include <stdio.h>
#include <string.h>

int main() {
  char s[9] = "12345678";
  char *str = "0" + s; // by concatenation
  printf("%s\n", str);
  return 0;
}