#include <math.h>
#include <stdio.h>

int main() {
  int a, b;

  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);

  int sum = a + b;
  int difference = a - b;
  int product = a * b;
  float quotient = (float)a / b;
  int remainder = a % b;

  printf("sum of a and b is: %d\n", sum);
  printf("difference between a and b is: %d\n", difference);
  printf("product of a and b is: %d\n", product);
  printf("quotient of a by b (rounded towards 0) is: %.2f\n", quotient);
  // truncates toward 0

  if (remainder > 0 && b > 0 || remainder < 0 && b < 0) {
    printf(
        "remainder of a divided by b is: %d, same sign as the first operand.\n",
        remainder);
  } else {
    printf("remainder of a divided by b is: %d, opposite sign from the second "
           "operand.\n",
           remainder);
  }

  return 0;
}