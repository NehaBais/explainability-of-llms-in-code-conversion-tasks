#include <stdio.h>
#include <string.h>

int main() {
  char s1[50] = "Hello";  // We need a large enough buffer for both strings
  strcat(s1, ", World!"); // strcat is used to concatenate two strings in C
  printf("%s\n", s1);     // Print the contents of the string variable
  return 0;               // C programs generally end with a return statement
}