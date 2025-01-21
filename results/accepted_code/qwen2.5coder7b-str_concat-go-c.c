#include <stdio.h>
#include <string.h>

int main() {
  // Declare and initialize a string variable.
  char s[] = "hello";

  // Print the first string variable.
  printf("%s\n", s);

  // Concatenate a string literal to the first string variable, assign result to
  // another string variable
  char s2[50]; // Make sure this size is enough for your concatenated string
  strcpy(s2, s);
  strcat(s2, " literal");

  // Print the second string variable.
  printf("%s\n", s2);

  return 0;
}