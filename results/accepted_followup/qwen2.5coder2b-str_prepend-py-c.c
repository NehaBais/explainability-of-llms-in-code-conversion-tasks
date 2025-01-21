#include <stdio.h>
#include <string.h>

int main() {
  char s[12]; // Assuming the length of the string is at least 9 (including the
              // '0' and the terminating '\0')

  strcpy(s, "12345678");
  strcat(s, "0"); // by concatenation

  printf("%s\n", s);
  return 0;
}