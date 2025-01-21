#include <ctype.h>
#include <stdio.h>
#include <stdlib.h> // Include stdlib header for atoi declaration
#include <string.h>

int main() {
  char str1[50] = "abcd";
  char str2[50] = "abcd";

  printf("%d\n", strcmp(str1, str2) == 0); // true
  printf("%d\n", strcmp(str1, str1) == 0); // true

  printf("%d\n", atoi("123") == atoi(str2)); // true
  printf("%d\n", atoi("123") != atoi(str2)); // false

  char str4[50] = "ABCD";
  printf("%d\n", strcmp(str4, str1) == 0);     // false
  printf("%d\n", strncmp(str4, str1, 4) != 0); // true

  printf("%d\n", atoi("123") > atoi(str2));   // false
  printf("%d\n", strncmp(str4, str1, 4) < 0); // true

  return 0;
}