#include <stdio.h>

int main() {
  // text assigned to a string variable
  char s[] = "hello";

  // output string variable
  printf("%s\n", s);

  // concatenate original and another literal, assign result to another string
  // variable
  char s2[15];
  sprintf(s2, "%s literal", s);

  // output second string variable
  printf("%s\n", s2);

  return 0;
}