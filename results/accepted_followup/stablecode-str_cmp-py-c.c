#include <stdio.h>
#include <string.h>
int str_compare(char *a, char *b) {
  if (strcmp(a, b) == 0) {
    return 0; // a is equal to b
  } else if (strcmp(a, b) > 0) {
    return 1; // a is strictly greater than b
  } else {
    return -1; // a is strictly less than b
  }
}
int main() {
  printf("String comparison result: ");
  printf("%d\n", str_compare("YUP", "YUP")));
  printf("String comparison result: ");
  printf("%d\n", str_compare("BALL", "BELL")));
  printf("String comparison result: ");
  printf("%d\n", str_compare("24", "123")));
  printf("Integer comparison result: ");
  printf("%d\n", str_compare("five", "nine")));
  return 0;
}