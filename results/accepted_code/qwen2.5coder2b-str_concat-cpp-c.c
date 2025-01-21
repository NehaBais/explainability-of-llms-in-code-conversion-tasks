#include <stdio.h>
#include <string.h>

int main() {
  char s[100];               // Create a character array to store string
  strcpy(s, "hello");        // Copy the content of "hello" to 's'
  printf("%s literal\n", s); // Print the concatenated string
  strcat(s, " literal");     // Concatenate "literal" with the original string
  printf("%s\n", s);         // Print the final concatenated string

  return 0;
}