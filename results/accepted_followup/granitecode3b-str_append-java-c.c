#include <stdio.h>
#include <string.h>
int main() {
  char *string = "abc";
  printf("%s", string);
  strcat(string, "def");
  printf("%s", string);
  return 0;
}