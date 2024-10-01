#include <stdio.h>
int main() {
  int a, b;

  a = 10; // example user entered values
  b = 20;

  if (a < b) {
    printf("a is less than b\n");
  } else if (a > b) {
    printf("a is greater than b\n");
  } else if (a == b) {
    printf("a is equal to b\n");
  }

  return 0; // exit program
}