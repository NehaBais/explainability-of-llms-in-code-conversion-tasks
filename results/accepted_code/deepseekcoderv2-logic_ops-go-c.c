#include <stdio.h>
int main() {
  int a, b;
  printf("Enter first boolean value: ");
  scanf("%d", &a);
  printf("Enter second boolean value: ");
  scanf("%d", &b);

  if (a == 1 && b == 1) {
    printf("Both a and b are true.");
  } else if (a == 0 && b == 0) {
    printf("Both a and b are false.");
  } else {
    printf("One of the two values is not true.");
  }
}