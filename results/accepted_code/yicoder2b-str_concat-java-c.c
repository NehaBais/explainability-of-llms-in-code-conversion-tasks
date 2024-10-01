#include <stdio.h>

int main() {
  char s[] = "hello";
  printf("%s literal\n", s);
  char s2[10] = s;
  strcat(s2, " literal");
  printf("%s\n", s2);
  return 0;
}