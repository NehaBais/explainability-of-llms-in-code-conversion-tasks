#include <stdio.h>
#include <string.h>

int main() {
  // text assigned to a char array variable
  char s[] = "hello";

  // output string variable
  printf("%s\n", s);

  // concatenate variable and literal, assign result to another char array
  // variable
  char s2[20];
  strcpy(s2, s);
  strcat(s2, " literal");

  // output second string variable
  printf("%s\n", s2);

  return 0;
}