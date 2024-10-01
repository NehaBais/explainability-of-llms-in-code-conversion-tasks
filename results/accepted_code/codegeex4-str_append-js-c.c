#include <stdio.h>

int main() {
  char s1[50] = "Hello";
  strcat(s1, ", World!");
  printf("%s\n", s1);
  return 0;
}