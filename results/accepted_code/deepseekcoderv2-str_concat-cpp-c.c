#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char s[] = "hello";
  printf("%s literal\n", s);

  // Calculate the length of the original string plus the added text
  int len = strlen(s) + 8; // 8 is the length of " literal"

  // Allocate memory for the new string
  char s2[len];

  // Copy the original string to the new string
  strcpy(s2, s);

  // Concatenate " literal" to the new string
  strcat(s2, " literal");

  // Print the content of the new variable
  printf("%s\n", s2);

  return 0;
}