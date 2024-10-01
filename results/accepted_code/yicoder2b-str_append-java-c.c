#include <stdio.h>

int main() {
  char string[10] = "abc"; // String in array will hold maximum size of string
                           // which is not recommended but okay for simplicity.
  printf("%s\n", string);  // print initial string
  strcat(string, "def");   // append to the string
  printf("%s\n", string);  // print final string after appending
  return 0;
}