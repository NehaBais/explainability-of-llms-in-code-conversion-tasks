#include <stdio.h>

int main() {
  // Create a string variable and assign any text value to it
  char str[] = "Hello";

  // Prepend another string literal with the existing string variable
  printf("%s", ", World");

  return 0;
}