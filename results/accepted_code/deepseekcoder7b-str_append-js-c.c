#include <stdio.h>
#include <string.h>

int main() {
  char s1[50] = "Hello"; // string variable equal to any text value

  strcat(
      s1,
      ", World!"); // appending another string literal in the most idiomatic way

  printf("%s\n", s1); // show contents of the variable after append operation

  return 0;
}