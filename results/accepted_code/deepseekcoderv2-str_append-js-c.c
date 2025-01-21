#include <stdio.h>
#include <string.h> // For strcat

int main() {
  char s1[20] = "Hello";  // Create a character array (string) with initial size
  strcat(s1, ", World!"); // Append the string literal to the existing string
  printf("%s\n", s1);     // Show the contents of the variable after appending
  return 0;
}