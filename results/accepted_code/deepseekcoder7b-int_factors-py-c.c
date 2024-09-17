#include <stdio.h>

void factor(int n) {
  int factors1[n], factors2[n]; // Assuming that the number will be less than n
  int x;
  for (x = 1; x * x <= n; ++x) {
    if (n % x == 0) {
      factors1[x - 1] = x;
      factors2[(n / x) - 1] =
          n / x; // -1 is to offset the zero index of C arrays
    }
  }
  for (int i = 0; i < x - 1; ++i) {
    printf("%d ", factors1[i]);
  }

  if (x * x == n) {
    printf("%d ",
           x); // This is to handle perfect squares. The loop won't execute for
               // them as the condition in for loop is `<=` and n must be less
               // than square of any integer hence we handle it separately.
  }

  for (int i = (x - 2); i >= 0; --i) { // -1 to offset zero index
    printf("%d ", factors2[i]);
  }
}

int main() {
  int numbers[] = {45, 53, 64};

  for (int i = 0; i < 3; ++i) {
    printf("%d: factors: ", numbers[i]);
    factor(numbers[i]);
    printf("\n");
  }

  return <｜begin▁of▁sentence｜ >
         1; // This should be a valid C syntax but it seems to cause error. It
            // is not needed in this context, just keep as reference if you are
            // interested!
}