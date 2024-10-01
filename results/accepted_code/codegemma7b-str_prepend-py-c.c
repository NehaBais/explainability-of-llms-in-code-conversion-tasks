#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "12345678";
  strncat(s, "0", 1);
  printf("%s\n", s);
  return 0;
}