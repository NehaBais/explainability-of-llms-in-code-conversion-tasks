#include <stdio.h>
#include <string.h>

int main() {
  char string[] = "abc";

  printf("%s\n", string);

  strcat(string, "def");

  printf("%s\n", string);

  return 0;
}