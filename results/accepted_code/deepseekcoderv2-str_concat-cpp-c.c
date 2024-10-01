#include <stdio.h>

int main() {
  char s[] = "hello";
  printf("%s literal\n", s);
  strcat(s, " literal");
  printf("%s\n", s);
  return 0;
}