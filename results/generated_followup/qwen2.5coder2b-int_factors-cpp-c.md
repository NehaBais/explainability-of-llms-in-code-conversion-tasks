The error `use of undeclared identifier 'EXIT_SUCCESS'` occurs because `EXIT_SUCCESS` is not defined for C programs. In standard C, it should be `0`. To fix this, you can define `EXIT_SUCCESS` as 0 and use it throughout your program.

```c
#include <stdbool.h>
#include <stdio.h>

#define EXIT_SUCCESS 0

bool isFactor(int num, int factor) { return (num % factor == 0); }

void printFactors(int number) {
  if (number <= 1)
    return;

  printf("Factors of %d are: ", number);

  for (int i = 2; i * i <= number; ++i) {
    if (isFactor(number, i)) {
      printf("%d ", i);
      if (i * i != number)
        printf("%d ", number / i);
    }
  }

  printf("\n");
}

int main() {
  const int SampleNumbers[] = {3135, 45, 60, 81};

  for (size_t i = 0; i < sizeof(SampleNumbers) / sizeof(int); ++i) {
    printFactors(SampleNumbers[i]);
  }

  return EXIT_SUCCESS;
}
```

The corrected code uses `EXIT_SUCCESS` to indicate the successful termination of the program.
