#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  char str1[50] = "abcd";
  char str2[50] = "abcd";
  printf("%d\n", strcmp(str1, str2) == 0);                  // true
  printf("%d\n", strcmp(str1, str2) == strcmp(str1, str1)); // true
  printf("%d\n", atoi("123") == atoi(str2));                // true
  printf("%d\n", atoi("123") != atoi(str2));                // false
  char str4[50] = "ABCD";
  printf("%d\n", strcmp(str4, str1) == 0);               // false
  printf("%d\n", strncmp(str4, str1, 4) != 0);           // true
  printf("%d\n", strtol("123", NULL, 10) == atoi(str2)); // false
  printf("%d\n", atoi("123") > atoi(str2));              // false
  printf("%d\n", strncmp(str4, str1, 4) < 0);            // true

  return 0;
}