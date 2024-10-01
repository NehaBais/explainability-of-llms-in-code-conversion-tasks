#include <stdio.h>
#include <string.h>

int main() {
  char s[100] = "foo"; // create a string variable

  // append another string to the first string
  strcat(s, "bar");

  // print the contents of the updated string
  printf("%s\n", s);

  return 0;
}