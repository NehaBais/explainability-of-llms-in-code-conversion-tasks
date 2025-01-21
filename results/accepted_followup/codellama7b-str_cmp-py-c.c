#include <stdio.h>
#include <string.h>

void compare(char *a, char *b) {
  printf("a is of type %s and b is of type %s\n", a, b);
  if (strcmp(a, b) < 0) {
    printf("%s is strictly less than %s\n", a, b);
  } else if (strcmp(a, b) <= 0) {
    printf("%s is less than or equal to %s\n", a, b);
  } else if (strcmp(a, b) > 0) {
    printf("%s is strictly greater than %s\n", a, b);
  } else if (strcmp(a, b) >= 0) {
    printf("%s is greater than or equal to %s\n", a, b);
  } else if (strcmp(a, b) == 0) {
    printf("%s is equal to %s\n", a, b);
  } else {
    printf("%s is not equal to %s\n", a, b);
  }
}

int main() {
  char str1[256], str2[256];
  double num1, num2;

  // Convert floating point numbers to strings
  sprintf(str1, "%f", 24.0);
  sprintf(str2, "%f", 123.0);

  // Pass strings to compare function
  compare(str1, str2);

  return 0;
}