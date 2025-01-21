#include <stdio.h>
#include <string.h>

int compareStrings(char *str1, char *str2) { return strcmp(str1, str2); }

int main() {
  printf("%d\n", compareStrings("abcd", "abcd")); // true
  printf("%d\n", compareStrings("abcd", "abcd")); // true
  printf("%d\n", compareStrings("123", "123"));   // true
  printf("%d\n", compareStrings("123", "123"));   // false
  printf("%d\n", compareStrings("ABCD", "abcd")); // false
  printf("%d\n", compareStrings("ABCD", "abcd")); // true (case insensitive)

  return 0;
}