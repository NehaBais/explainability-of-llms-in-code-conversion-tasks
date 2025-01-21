#include <stdio.h>

int main() {
  char *string = "def";
  char new_string[5];
  strcat(new_string, "abc");

  printf("%s", new_string);

  return 0;
}