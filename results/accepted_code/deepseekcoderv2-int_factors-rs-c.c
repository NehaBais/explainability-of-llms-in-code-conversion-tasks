#include <math.h> // for math functions like sqrt()
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("100: ");
  int i, j;
  int n = 100;

  printf("{");
  for (i = 2; i <= n / 2;
       i++) { // iterate from the smallest possible factor to half of the number
    if (n % i == 0) { // check if it's a valid factor by checking its remainder
                      // when divided by zero
      j = n / i;
      printf("%d, ", i); // print out each factor in order
      printf("%d", j);
      break; // exit loop once all factors have been found
    } else {
      continue; // keep going until we find one that works!
    }
  }
  if (i == n / 2 + 1) { // check if none of the numbers up to half are valid
                        // factorizations, then there must be no other primes
                        // above sqrt(n).
    printf("%d", n);    // print out last number in sequence since it's not
                        // divisible by any smaller ones and thus prime itself!
  }

  printf("}\n");
}