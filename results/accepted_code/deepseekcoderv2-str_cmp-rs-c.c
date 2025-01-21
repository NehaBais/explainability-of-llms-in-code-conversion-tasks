#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  // Define the strings
  const char *a = "abc";
  char b[] = "Bac";

  // Compare two strings for exact equality and inequality
  if (strcmp(a, b) == 0) {
    printf("The strings are equal\n");
  } else {
    printf("The strings are not equal\n");
  }

  // Compare two strings for inequality (inverse of exact equality)
  if (strcmp(a, b) != 0) {
    printf("The strings are not equal\n");
  } else {
    printf("The strings are equal\n");
  }

  // Compare two strings to see if one is lexically ordered before the other
  if (strcmp(a, b) > 0) {
    printf("The first string is lexically after the second\n");
  } else if (strcmp(a, b) < 0) {
    printf("The first string is lexically before the second\n");
  } else {
    printf("Both strings are lexicographically equal\n");
  }

  // Compare two strings to see if one is lexically ordered after the other
  if (strcmp(a, b) < 0) {
    printf("The first string is lexically before the second\n");
  } else if (strcmp(a, b) > 0) {
    printf("The first string is lexically after the second\n");
  } else {
    printf("Both strings are lexicographically equal\n");
  }

  // Case-insensitive comparison using toupper function from <ctype.h>
  char a_upper[strlen(a) + 1];
  char b_upper[strlen(b) + 1];
  for (int i = 0; i < strlen(a); i++) {
    a_upper[i] = toupper((unsigned char)a[i]);
  }
  a_upper[strlen(a)] = '\0';
  for (int i = 0; i < strlen(b); i++) {
    b_upper[i] = toupper((unsigned char)b[i]);
  }
  b_upper[strlen(b)] = '\0';

  // Equality in a case-insensitive manner
  if (strcmp(a_upper, b_upper) == 0) {
    printf("Both strings are equal when ignoring case\n");
  }

  // Numeric string comparison is done lexicographically unless explicitly
  // handled differently
  const char *num1 = "123";
  const char *num2 = "124";

  if (strcmp(num1, num2) < 0) {
    printf("The first numeric string is lexically before the second\n");
  } else if (strcmp(num1, num2) > 0) {
    printf("The first numeric string is lexically after the second\n");
  } else {
    printf("Both numeric strings are equal\n");
  }

  return 0;
}