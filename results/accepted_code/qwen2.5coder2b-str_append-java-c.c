#include <stdio.h>
#include <string.h>

int main() {
  char string[100] = "abc";
  printf("Original string: %s\n", string);
  strcat(string, "def");
  printf("Appended string: %s\n", string);
  return 0;
}