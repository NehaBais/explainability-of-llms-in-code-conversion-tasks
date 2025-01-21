#include <stdio.h>
#include <string.h> // For strcat

int main() {
  char s[50] = ", World"; // Assuming a maximum string length of 49 characters
                          // plus null terminator
  char hello[] = "Hello";

  // Prepend the string literal to the existing string variable
  strcpy(s, ""); // Clear the initial content of s
  strcat(s, hello);
  strcat(s, ", World");

  printf("%s\n", s);

  return 0;
}