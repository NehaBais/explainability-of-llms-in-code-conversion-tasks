#include <math.h>
#include <stdio.h>
#define SIZE 100 // size of factor array

int factor(int num) {
  int factors[SIZE], count = 0; // initialize an array to hold the factors and
                                // set a counter for them
  for (int i = 1; i <= sqrt(num as float) + 1; ++i) {
    if (num % i == 0) {
      factors[count++] =
          i; // if num is divisible by i, push it to factors array
      if (i !=
          num / i) // unless the pair is identical, push its counterpart too
        factors[count++] = num / i;
    }
  }

  // sort the factors array
  for (int i = 0; i < count - 1; ++i) {
    for (int j = i + 1; j > 0; --j) {
      if (factors[j] < factors[j - 1]) {
        // swapping the elements
        int temp = factors[j];
        factors[j] = factors[j - 1];
        factors[j - 1] = temp;
      } else
        break;
    }
  }

  for (int i = 0; i < count; ++i) {
    printf("%d ", factors[i]); // print the sorted array
  }

  return 0; // return 0 for success
}