#include <stdio.h>

int main() {

  // Define the initial string value and declare it as an array of characters
  char s1[] = "Hello";

  // Append the second string literal to the first string variable in the most
  // idiomatic way
  strcat(s1, ", World!");

  // Print the contents of the variable after the append operation
  printf("%s\n", s1);

  return 0;
}