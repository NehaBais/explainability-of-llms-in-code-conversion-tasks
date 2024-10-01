#include <math.h>
#include <stdio.h>

void factors(int num) {
  int i;
  printf("[%d", 1);
  for (i = 2; i <= sqrt(num); ++i) {
    while ((num % i) == 0) {
      printf(", %d", i);
      num /= i;
    }
  }
  if (num > 2)
    printf(", %d", num);
  printf("]\n");
}

int main() {
  factors(45); // outputs: [1,3,5,9,15,45]
  factors(53); // outputs: [1,53]
  factors(64); // outputs: [1,2,4,8,16,32,64]
  return 0;
}