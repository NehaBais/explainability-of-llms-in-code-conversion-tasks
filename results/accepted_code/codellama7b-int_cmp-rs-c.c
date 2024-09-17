#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  if (a < b) {
    printf("%d is less than %d\n", a, b);
  } else if (a == b) {
    printf("%d equals %d\n", a, b);
  } else if (a > b) {
    printf("%d is greater than %d\n", a, b);
  }
}