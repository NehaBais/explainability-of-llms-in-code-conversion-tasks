#include <stdio.h>
#include <string.h>

int main() {
  char s[] = ", World";
  strcat(s, "Hello");
  printf("%s\n", s);
  return 0;
}