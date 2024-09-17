#include <stdio.h>
#define MAX 100 // Assuming a maximum number of 100 for simplicity's sake

int main() {
  int n;

  while (scanf("%d", &n) != EOF) {
    printf("Factors of %d are: ", n);

    for (int i = 1; i <= n / 2 + 1;
         i++) { // Checking for factors up to square root of n
      if (n % i == 0) {
        printf("%d, ", i);

        // If the number is a perfect square and it hasn't printed its second
        // factor yet, print it here.
        if (i * i == n && i != 1)
          printf("%d\n", i);
      }
    }

    // Printing reversed factors list if the number is a perfect square
    for (int j = n / 2 + 1; j < MAX && j > 0; j--) {
      if (j * j == n) {
        printf("%d\n", j);
        break;
      }
    }
  }

  return 0;
}