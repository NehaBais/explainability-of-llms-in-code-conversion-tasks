#include <stdio.h>

void printFactors(int nr) {
  if (nr < 1) {
    printf("Factors of %d not computed\n", nr);
    return;
  }
  int factors[2048] = {1}; // Using an array of size 2048 for simplicity
  printf("Factors of %d: ", nr);
  for (int i = 0; i < sizeof(factors) / sizeof(int) && nr / factors[i] > 0;
       i++) {
    for (int j = 0; j <= i && nr / factors[j] > 0; j++) {
      for (int k = 0; k <= j; k++) {
        factors[k * i + j] *= factors[j];
      }
      nr /= factors[j];
    }
  }
  printf("Number of factors = %d\n",
         sizeof(factors) / sizeof(int)); // Print the number of factors
  for (int i = 0; i < sizeof(factors) / sizeof(int); i++) {
    if (i > 0)
      printf(" ");
    printf("%d", factors[i]);
  }
}