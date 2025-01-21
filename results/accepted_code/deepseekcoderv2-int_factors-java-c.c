#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// Function to compute the factors of a number
void factors(long n) {
  // TreeSet is not available in C, so we use a dynamic array (list) and sort it
  // later
  int capacity = 10;
  long *factorsArray = malloc(capacity * sizeof(long));
  int size = 0;

  factorsArray[size++] = n;
  factorsArray[size++] = 1L;

  for (long test = n - 1; test >= sqrt(n); test--) {
    if (n % test == 0) {
      factorsArray[size++] = test;
      factorsArray[size++] = n / test;
    }
  }

  // Sort the array before returning the factors
  for (int i = 0; i < size - 1; i++) {
    for (int j = i + 1; j < size; j++) {
      if (factorsArray[i] > factorsArray[j]) {
        long temp = factorsArray[i];
        factorsArray[i] = factorsArray[j];
        factorsArray[j] = temp;
      }
    }
  }

  // Print the sorted factors
  printf("Factors of %ld: ", n);
  for (int i = 0; i < size; i++) {
    printf("%ld ", factorsArray[i]);
  }
  printf("\n");

  free(factorsArray);
}

int main() {
  long number;
  printf("Enter a positive integer: ");
  scanf("%ld", &number);
  factors(number);
  return 0;
}