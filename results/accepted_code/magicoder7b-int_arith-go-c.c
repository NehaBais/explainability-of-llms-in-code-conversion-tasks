#include <stdio.h>

int main() {
  int a =
      10;    // replace with scanf later if input needs to be taken from console
  int b = 2; // replace with scanf later if input needs to be taken from console

  printf("%d + %d = %d\n", a, b, a + b);
  printf("%d - %d = %d\n", a, b, a - b);
  printf("%d * %d = %d\n", a, b, a * b);
  printf("%d / %d = %.0f\n", a, b, (double)a / b); // truncates towards 0
  printf("%d %% %d = %d\n", a, b, a % b);          // same sign as first operand
  return 0;
}