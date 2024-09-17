#include <stdio.h>

int main() {
  int a, b;
  scanf("%d %d", &a, &b);

  if (a == b) {
    printf("The numbers are equal.\n");
  } else if (a < b) {
    printf("The number %d is less than the number %d\n", a, b);
  } else {
    printf("The number %d is greater than the number %d\n", a, b);
  }

  return 0;
}