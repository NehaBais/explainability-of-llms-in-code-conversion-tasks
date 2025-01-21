#include <stdio.h>
#include <string.h>

int main() {
  // Define a char array and copy the string "hello" into it
  char s[10];
  strcpy(s, "hello");

  // Print the original string
  printf("Original string: %s\n", s);

  // Concatenate the original string with " world"
  strcat(s, " world");

  // Print the new concatenated string
  printf("Concatenated string: %s\n", s);

  return 0;
}