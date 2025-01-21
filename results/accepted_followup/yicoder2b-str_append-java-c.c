#include <stdio.h>
#include <string.h> // Include this to avoid error due to undefined strcat

int main() {
  char string[10] = "abc";
  printf("%s\n", string); // print initial string
  strcat(string, "def");  // append to the string
  printf("%s\n", string); // print final string after appending
  return 0;
}