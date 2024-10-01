#include <stdio.h>
#include <string.h>

int main() {
  char s[50] = "hello"; // Create a string variable equal to any text value.
  char t[50]; // Another string variable whose value is the original variable
              // concatenated with another string literal.

  strcpy(t, s);         // Copy contents of 's' into 't'.
  strcat(t, " there!"); // Concatenate " there!" to 't'.

  printf("The original variable: %s\n", s);
  printf(
      "The concatenated string : %s\n",
      t); // Illustrate the operation by printing out the content of variables.

  return 0;
}