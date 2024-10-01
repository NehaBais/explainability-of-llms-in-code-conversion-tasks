#include <stdio.h>
#include <string.h>

int main() {
  char s[20] = "hello"; // Create string variable with initial value as 'hello'

  printf("%s\n", s); // Output the contents of the first string

  strcat(s, " world"); // Concatenate another string to the first string
  printf("%s\n", s);   // Output the concatenated string

  return 0;
}