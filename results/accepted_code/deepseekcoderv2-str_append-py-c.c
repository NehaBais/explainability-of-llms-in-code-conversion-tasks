#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  // Create a string variable and initialize it with a text value
  char str[] = "12345678";

  // Append another string literal to the existing string
  strcat(str, "9!");

  // Show the contents of the variable after the append operation
  printf("%s\n", str);

  return 0;
}