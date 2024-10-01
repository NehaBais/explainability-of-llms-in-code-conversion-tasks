#include <stdio.h>
#include <string.h>

int main() {

  char s[20] = "hello";
  printf("%s literal\n", s);

  strcat(s, " literal");
  printf("%s\n", s);

  return 0;
}