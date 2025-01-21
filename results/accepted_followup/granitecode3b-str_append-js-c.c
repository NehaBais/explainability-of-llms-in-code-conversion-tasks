#include <stdio.h>
#include <string.h>

int main() {
  char s1[] = "Hello";
  strcat(s1, ", World!");
  printf("%s", s1);
  return 0;
}