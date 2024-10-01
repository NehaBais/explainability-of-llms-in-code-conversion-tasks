#include <stdio.h>
int main() {
  // Declare and initialize a string variable in C
  char str[] = "12345678";

  // Append another string literal to the first string
  strcat(str, "9!");

  // Print the contents of the variable after append operation.
  printf("%s", str);
  return 0;
}