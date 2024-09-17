#include <stdio.h>

int main() {
  int A;
  int b;
  printf("Enter two integers:\n");
  scanf("%d %d", &A, &b);
  if (A < b) {
    printf("%d is less than %d\n", A, b);
  } else if (A == b) {
    printf("%d equals %d\n", A, b);
  } else {
    printf("%d is greater than %d\n", A, b);
  };

  return 0;
}