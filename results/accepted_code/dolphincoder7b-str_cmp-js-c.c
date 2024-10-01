#include <stdbool.h>
#include <stdio.h>
#include <string.h>
int main() {
  printf("%d\n", "abcd" == "abcd");            // true
  printf("%d\n", "abcd" != "abcd");            // false
  printf("%d\n", strcmp("abcd", "abcd") == 0); // true
  printf("%d\n", strcmp("abcd", "dcba") < 0);  // true
  return 0;
}