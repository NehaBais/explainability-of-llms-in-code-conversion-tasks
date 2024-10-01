#include <stdio.h>
#include <string.h>

int main() {
  char s[10] =
      "hello"; // String variable s initialized with a text value of 'hello'
  strcat(s,
         " there!"); // Concatenates another string literal into the variable s
  printf("%s\n", s); // Prints out the content of the variable s
  return 0;          // Ends the program execution
}