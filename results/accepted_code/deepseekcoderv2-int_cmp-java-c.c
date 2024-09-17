#include <stdio.h>
int main() {
  int num1, num2;
  printf("Enter 2 numbers:");
  scanf("%d %d", &num1, &num2);
  if (num1 < num2) {
    printf("\n%d is less than %d\n", num1, num2);
  } else if (num1 > num2) {
    printf("\n%d is greater than %d\n", num1, num2);
  } else
    printf("\n%d is equal to %d\n", num1, num2);
}