#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "abcd";
  char str2[] = "dcba";
  char str3[] = "ABCD";
  char str4[] = "abcd";
  char str5[] = "123";

  // Comparing two strings for exact equality
  if (strcmp(str1, str4) == 0)
    printf("The strings are equal.\n");
  else
    printf("The strings are not equal.\n");

  // Comparing two strings for inequality (i.e., the inverse of exact equality)
  if (strcmp(str1, str2) != 0)
    printf("The strings are not equal.\n");
  else
    printf("The strings are equal.\n");

  // Comparing two strings to see if one is lexically ordered before than the
  // other
  if (strcmp(str1, str4) < 0)
    printf("%s comes before %s.\n", str1, str4);
  else
    printf("%s does not come before %s.\n", str1, str4);

  // Comparing two strings to see if one is lexically ordered after than the
  // other
  if (strcmp(str2, str1) > 0)
    printf("%s comes after %s.\n", str2, str1);
  else
    printf("%s does not come after %s.\n", str2, str1);

  // Case sensitive comparison
  if (strcmp(str3, str4) == 0)
    printf("The strings are equal.\n");
  else
    printf("The strings are not equal.\n");

  // Case insensitive comparison
  char upperStr[] = "ABCD";
  char lowerStr[] = "abcd";
  int i;
  for (i = 0; i < strlen(upperStr); i++) {
    if (upperStr[i] >= 'a' && upperStr[i] <= 'z')
      upperStr[i] += ('A' - 'a');
    if (lowerStr[i] >= 'A' && lowerStr[i] <= 'Z')
      lowerStr[i] -= ('A' - 'a');
  }
  if (strcmp(upperStr, lowerStr) == 0)
    printf("The strings are equal.\n");
  else
    printf("The strings are not equal.\n");

  // Comparing numeric strings (not treated lexically in C)
  char num1[] = "123";
  char num2[] = "123";

  if (strcmp(num1, num2) == 0)
    printf("The numbers are equal.\n");
  else
    printf("The numbers are not equal.\n");

  return 0;
}