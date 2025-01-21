#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// Callback function for sorting (compares two integers)
int compare(const void *a, const void *b) {
  int A = *(int *)a;
  int B = *(int *)b;
  if (A < B)
    return -1;
  else if (A > B)
    return 1;
  return 0;
}

// Function to find factors of a number
int *factors(int num, int *returnSize) {
  // Find the number of factors
  *returnSize = 0;
  for (int i = 1; i <= sqrt(num); i++)
    if (num % i == 0)
      (*returnSize)++;

  // Initialize array to store factors
  int *factorArr = malloc((*returnSize) * sizeof(int));
  int index = 0;

  // Loop through factors and add to array
  for (int i = 1; i <= sqrt(num); i++)
    if (num % i == 0) {
      factorArr[index++] = i;

      // Add reciprocal of current factor only if it's not the same as current
      // factor
      if ((num / i != i))
        factorArr[index++] = num / i;
    }

  // Sort array in ascending order
  qsort(factorArr, *returnSize, sizeof(int), compare);

  return factorArr;
}