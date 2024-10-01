#include <stdio.h>
#include <string.h>

int main() {
  char string[5] = "def";
  strncpy(string, "abc", strlen("abc"));
  printf("%s\n", string); // Prints: abcdef
  return 0;
}