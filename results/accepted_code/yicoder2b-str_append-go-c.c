#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *s1 = "foo"; // string variable s1 is initialized with the value of s2
  char *s2 =
      "bar"; // string variable s2 is initialized with another string literal

  // Appending s2 to s1 using strcat function in C.
  strcat(s1, s2);

  printf("%s\n", s1); // prints the combined strings
  return 0;
}