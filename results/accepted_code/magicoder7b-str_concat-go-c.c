#include <stdio.h>
#define MAX_SIZE 100

int main() {
  // text assigned to a string variable
  char s[MAX_SIZE] = "hello";

  // output string variable
  printf("%s\n", s);

  // concatenate variable and literal, assign result to another string variable
  char s2[MAX_SIZE];
  strcpy(s2, s);
  strcat(s2, " literal");

  // output second string variable
  printf("%s\n", s2);

  return 0;
}