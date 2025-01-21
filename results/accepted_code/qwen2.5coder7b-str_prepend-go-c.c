#include <stdio.h>
#include <string.h>

int main() {
  // Declare char arrays for strings
  char s[20];
  char prepend[] = "Hello, ";

  // Initialize the string
  strcpy(s, "world!");

  // Prepend the string
  strcat(prepend, s);

  printf("%s\n", prepend); // Output: Hello, world!

  return 0;
}