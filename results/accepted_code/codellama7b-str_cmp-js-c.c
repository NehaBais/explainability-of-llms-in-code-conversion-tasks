#include <string.h>

int main() {
  char str1[] = "abcd";
  char str2[] = "abcd";
  char str3[] = "dcba";

  if (strcmp(str1, str2) == 0) {
    printf("Strings are equal\n");
  } else {
    printf("Strings are not equal\n");
  }

  if (strcmp(str1, str3) < 0) {
    printf("String 1 is lexically ordered before string 2\n");
  } else {
    printf("String 1 is lexically ordered after or equal to string 2\n");
  }

  return 0;
}