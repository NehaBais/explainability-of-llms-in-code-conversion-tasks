#include <stdio.h>

int main() {
  char *string = "def";
  char *new_string = "abc" + string;

  printf("%s", new_string);

  return 0;
}