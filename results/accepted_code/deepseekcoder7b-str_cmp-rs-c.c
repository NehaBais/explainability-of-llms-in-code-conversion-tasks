#include <stdio.<｜begin▁of▁sentence｜>
#include <string.h>

int main() {
  char a[] = "abc";
  char b[] = "Bac";

  // Comparing two strings for exact equality
  if (strcmp(a, b) == 0)
    printf("The strings are equal\n");

  // Comparing two strings for inequality
  if (strcmp(a, b) != 0)
    printf("The strings are not equal\n");

  // Comparing two strings to see if one is lexically ordered before than the
  // other
  if (strcmp(a, b) < 0)
    printf("The first string is lexically before the second\n");

  // Comparing two strings to see if one is lexically ordered after than the
  // other
  if (strcmp(a, b) > 0)
    printf("The first string is lexically after the second\n");

  // Case insensitive comparison
  char ac[] = "abc";
  char bc[] = "Bac";

  for (int i = 0; ac[i]; i++)
    ac[i] = toupper((unsigned char)ac[i]);
  for (int i = 0; bc[i]; i++)
    bc[i] = toupper((unsigned char)bc[i]);

  if (strcmp(ac, bc) == 0)
    printf("Both strings are equal when ignoring case\n");

  // Lexical comparison of numeric strings
  char num1[] = "123";
  char num2[] = "456";

  if (strcmp(num1, num2) < 0)
    printf("The first string is lexically before the second\n");

  if (strcmp(num1, num2) > 0)
    printf("The first string is lexically after the second\n");

  return 0;
}