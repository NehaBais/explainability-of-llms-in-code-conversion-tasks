#include <stdio.h>
#include <string.h>

int main() {
  // Create a char array with enough space for the new string.
  // Here, we assume that "Hello, world!" will be the final string.
  char s[14] = "world!";

  // Copy "Hello, " to the beginning of s.
  strcpy(s, "Hello, ");

  // Prepend 's' with the literal "Hello, ".
  strcat(s, "Hello, ");

  printf("%s\n", s);

  return 0;
}