#include <ctype.h> // For tolower
#include <stdio.h>
#include <string.h> // For strcmp and stricmp

int main() {
  printf("%d\n", strcmp("abcd", "abcd") == 0); // true
  printf("%d\n", strcmp("abcd", "abcd") == 0); // true
  printf("%d\n", strcmp("123", "123") == 0); // true (numeric strings are equal)
  printf("%d\n", strcmp("123", "123") == 0); // true (numeric strings are equal)
  printf("%d\n", strcmp("ABCD", "abcd") != 0); // true
  printf("%d\n", strcmp("ABCD", "abcd") != 0); // true
  printf("%d\n",
         strcmp("123", "123") == 0); // false (numeric strings are not equal)
  printf("%d\n", strcmp("123", "123") != 0);    // true
  printf("%d\n", strcmp("abcd", "dcba") < 0);   // true
  printf("%d\n", strcmp("abcd", "dcba") > 0);   // false
  printf("%d\n", stricmp("ABCD", "abcd") == 0); // true (case insensitive)

  return 0;
}