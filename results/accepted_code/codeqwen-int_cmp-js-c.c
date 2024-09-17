#include <stdio.h>

void compare(int A, int B) {
  if (A == B)
    printf("%d equals %d", A, B);
  if (A < B)
    printf("%d is less than %d", A, B);
  if (A > B)
    printf("%d is greater than %d", A, B);
}

int main() {
  int a, B;

  printf("Enter two integers: ");
  scanf("%d %d", &A, &B);
  compare(A, B);

  return 0;
}