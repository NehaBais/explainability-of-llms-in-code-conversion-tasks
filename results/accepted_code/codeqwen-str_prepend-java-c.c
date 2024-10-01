#include <stdio.h>
#include <string.h>

int main() {
  char string[] = "def";
  strcpy(string, "abc" + string);
  printf("%s", string);
  return 0;
}