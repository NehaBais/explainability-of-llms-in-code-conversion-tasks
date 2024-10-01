#include <math.h>
#include <stdio.h>

void factors(int num) {
  int i;
  printf("[");
  for (i = 1; i <= floor(sqrt((double)num)); ++i) {
    if (num % i == 0) {
      printf("%d", i);
      if (num / i != i) {
        printf(",%d", num / i);
      }
      if (i < floor(sqrt((double)num))) {
        printf(", ");
      }
    }
  }
  printf("]\n");
}

int main() {
  factors(45); // prints [1,3,5,9,15,45]
  factors(53); // prints [1,53]
  factors(64); // prints [1,2,4,8,16,32,64]
  return 0;
}