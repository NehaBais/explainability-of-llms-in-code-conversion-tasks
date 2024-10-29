#include <stdio.h>
#include <string.h>

int main() {
  // create a string variable equal to any text value
  char s[] = "hello";

  // concatenate with another string literal
  strcat(s, " there!");

  // show the content of the variables
  printf("%s\n", s);
  return 0;
}