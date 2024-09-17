#include <math.h>
#include <stdio.h>

void factor(int n) {
  int factors1[n], factors2[n];
  int count = 0;

  for (int x = 1; x <= sqrt(n); x++) {
    if (n % x == 0) {
      factors1[count] = x;
      factors2[count] = n / x;
      count++;
    }
  }

  // Add the square root in case of perfect squares
  int square_root = sqrt(n);
  if ((int)(square_root * square_root) == n) {
    factors1[count] = square_root;
  }

  // Reverse the order of factors2 and merge them with factors1
  for (int i = count - 1; i >= 0; i--) {
    printf("%d ", factors1[i]);
  }
}

int main() {
  int num[] = {45, 53, 64};
  for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++) {
    factor(num[i]);
    printf("\n");
  }
  return 0;
}