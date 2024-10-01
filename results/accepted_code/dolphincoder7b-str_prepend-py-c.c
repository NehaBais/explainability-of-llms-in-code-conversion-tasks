#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "12345678";
  strcat(s, "0"); // by concatenation
  printf("%s\n", s);
  return 0;
}