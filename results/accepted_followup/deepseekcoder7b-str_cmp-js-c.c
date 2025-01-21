#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  // Comparing two strings for exact equality
  printf("%d\n", strcmp("abcd", "abcd")); // true, prints 0

  // Comparing two strings for inequality (i.e., the inverse of exact equality)
  printf("%d\n", strcmp("ABCD", "abcd")); // false, not zero

  // Comparing two strings to see if one is lexically ordered before than the
  // other
  printf("%d\n", strcmp("abcd", "dcba")); // true, less than 0

  // Comparing two strings to see if one is lexically ordered after than the
  // other
  printf("%d\n", strcmp("dcba", "abcd")); // false, not less than zero

  char str1[] = "ABCD";
  char str2[] = "abcd";

  int len = strlen(str1);
  for (int i = 0; i < len; ++i) {
    str1[i] = toupper((unsigned char)str1[i]);
    str2[i] = toupper((unsigned char)str2[i]);
  }

  // Case insensitive comparison
  printf("%d\n", strcmp(str1, str2)); // true, prints zero

  return <｜begin▁of▁sentence｜ > 0;
}