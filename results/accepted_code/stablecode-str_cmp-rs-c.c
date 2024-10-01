#include <stdio.h>
#include <string.h>

int main() {
  char a[100] = "abc";
  char b[100] = "Bac";

  // comparing two strings for exact equality
  if (strcmp(a, b)) {
    printf("The strings are equal\n");
  }

  // comparing two strings for inequality (i.e., the inverse of exact equality)
  if (!strcmp(a, b))) {
        printf("The strings are not equal\n");
    }

  // comparing two strings to see if one is lexically ordered before than the
  // other
  if (strcoll(a, b)) {
    printf("The first string is lexically before the second\n");
  }

  // comparing two strings to see if one is lexically ordered after than the
  // other
  if (!strcoll(a, b))) {
        printf("The first string is lexically after the second\n");
    }

  // performing case-insensitive comparisons
  char *a3 = strcasecmp(a, b) ? a : b;
  char *b3 = strcasecmp(a, b) ? b : a;

  if (strcmp(a3, b3)) {
    printf("Both strings are equal when ignoring case\n");
  }

  return 0;
}