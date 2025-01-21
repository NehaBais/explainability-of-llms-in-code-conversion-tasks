#include <stdio.h>

void bitwise(int a, int b) {
  if (b < 0) {
    printf("Error: Shift amount must not be negative\n");
    return;
  }
  printf("%d %% %d = %d \n", a, b, a % b); // Print remainder of division
  printf("%d / %d = %f \n", a, b,
         (float)a /
             (float)b); // print float value of the division of two numbers.
}
int main() {
  bitwise(10, 3);
  return 0;
}