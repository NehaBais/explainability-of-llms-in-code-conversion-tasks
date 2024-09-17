#include <stdio.h>
int main() {
  int number1;
  int number2;
  printf("Enter the first integer:");
  scanf("%d", &number1);
  printf("\nEnter the second integer:");
  scanf("%d", &number2);
  if (number1 < number2) {
    printf("%d is less than %d\n", number1, number2);
  } else if (number1 > number2) {
    printf("%d is greater than %d\n", number1, number2);
  } else {
    printf("%d and %d are equal.\n", number1, number2);
  }
}