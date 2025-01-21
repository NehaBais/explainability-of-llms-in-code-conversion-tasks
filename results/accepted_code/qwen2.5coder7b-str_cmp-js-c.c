#include <stdio.h>
#include <string.h>

int main() {
  char str1[50] = "abcd";
  char str2[50] = "dcba";

  // Comparing two strings for exact equality (using strcmp)
  printf("%d\n", !strcmp(str1, str1)); // Outputs: 1
  printf("%d\n", !strcmp(str1, str2)); // Outputs: 0

  // Comparing two strings for inequality (using strcmp)
  printf("%d\n", strcmp(str1, str2) != 0); // Outputs: 1

  // Comparing two strings to see if one is lexically ordered before than the
  // other
  printf("%d\n", strcmp(str1, str2) < 0);     // Outputs: 0
  printf("%d\n", strcmp("abcd", "dcba") < 0); // Outputs: 1

  // Comparing two strings to see if one is lexically ordered after than the
  // other
  printf("%d\n", strcmp(str2, str1) > 0);     // Outputs: 1
  printf("%d\n", strcmp("dcba", "abcd") > 0); // Outputs: 0

  // How to achieve both case sensitive comparisons and case insensitive
  // comparisons within the language
  char upperStr[50] = "ABCD";
  char lowerStr[50] = "abcd";

  printf("%d\n",
         strcmp(upperStr, lowerStr) == 0); // Outputs: 0 (case sensitive)
  printf("%d\n", !strcmp(strlwr(upperStr),
                         strlwr(lowerStr))); // Outputs: 1 (case insensitive)

  return 0;
}