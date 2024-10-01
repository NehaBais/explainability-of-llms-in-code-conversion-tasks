#include <stdio.h>
#include <string.h>

int main() {
  char s[10]; // assuming that "hello" won't exceed 8 characters plus
              // null-terminator
  strcpy(s, "hello");
  printf("%s literal\n", s);

  // Note: strcat requires a destination string with enough space to hold the
  // concatenated string.
  char s2[10];
  strcpy(s2, s);
  strcat(s2, " literal");
  printf("%s\n", s2);

  return 0;
}