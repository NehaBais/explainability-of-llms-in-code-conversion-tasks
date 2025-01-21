#include <stdio.h>
#include <string.h>

int main() {
  // text assigned to a string variable
  char s[] = "hello";

  printf("%s\n", s);

  // concatenate variable and literal, assign result to another string variable
  char s2[15]; // assuming that the maximum length of new string won't exceed 14
               //  (for null character)
  strcpy(s2, s);
  strcat(s2, " literal");

  printf("%s\n", s2);

  return 0;
}