The error message indicates that the compiler does not recognize the `malloc` and `free` functions, which are necessary for dynamic memory allocation in C.

To fix this error, we need to include the `<stdlib.h>` header file at the beginning of our program. Additionally, we should ensure that each factor is printed out with a comma after it, and we should also handle cases where no factors exist for a given number by printing an appropriate message.

The corrected code is as follows:

```c
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// Function to compute the factors of a positive integer
int *factor(int n) {
  int *factors = (int *)malloc(n * sizeof(int));
  int count = 0;

  for (int i = 1; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      factors[count++] = i;
      if (i != n / i)
        factors[count++] = n / i;
    }
  }

  factors[count] = -1; // To mark the end of the array
  return factors;
}

int main() {
  int numbers[] = {45, 53, 64};

  for (int i : numbers) {
    int *factors = factor(i);
    printf("%i: factors: ", i);

    while (*factors != -1) {
      printf("%d, ", *factors);
      ++factors;
    }

    if (*factors == -1)
      printf("No factors\n");
    else
      printf("\n");

    free(factors); // Don't forget to free the memory allocated by the function
  }

  return 0;
}
```
