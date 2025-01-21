#include <stdio.h>
#include <string.h>

int main() {
  char *s = "hello";
  char s2[64];
  strcpy(s2, s);
  strcat(s2, "literal");
  printf("%s\n", s);
  printf("%s\n", s2);
  return 0;
}