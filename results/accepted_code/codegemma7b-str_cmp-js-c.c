#include <string.h>

int main() {
  // Comparing two strings for exact equality
  printf("ABCD == abcd: %d\n", strcmp("ABCD", "abcd") == 0);

  // Comparing two strings for inequality (inverse of exact equality)
  printf("ABCD != abcd: %d\n", strcmp("ABCD", "abcd") != 0);

  // Comparing two strings to see if one is lexically ordered before than the
  // other
  printf("ABCD < abcd: %d\n", strcmp("ABCD", "abcd") < 0);

  // Comparing two strings to see if one is lexically ordered after than the
  // other
  printf("ABCD > abcd: %d\n", strcmp("ABCD", "abcd") > 0);

  // Case sensitive comparison
  printf("ABCD == abcd (case sensitive): %d\n", strcmp("ABCD", "abcd") == 0);

  // Case insensitive comparison
  printf("ABCD == abcd (case insensitive): %d\n",
         strcasecmp("ABCD", "abcd") == 0);

  // Numeric strings comparison
  printf("123 == 123: %d\n", strcmp("123", "123") == 0);

  return 0;
}