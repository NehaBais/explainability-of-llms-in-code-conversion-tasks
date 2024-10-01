#include <stdio.h>
#include <string.h>

int main() {
  // Text assigned to a string variable
  char s[] = "hello";

  // Output string variable
  printf("%s\n", s);

  // Concatenate variable and literal, assign result to another string variable
  char s2[strlen(s) + 7];
  strcpy(s2, s);
  strcat(s2, " literal");

  // Output second string variable
  printf("%s\n", s2);

  return 0;
}