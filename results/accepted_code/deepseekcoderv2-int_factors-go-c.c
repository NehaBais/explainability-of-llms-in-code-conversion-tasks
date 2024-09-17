#include <math.h>
#include <stdio.h>

void print_factors(long long number) {
  if (number <= 0) {
    printf("\nFactors of %lld not computed\n", number);
    return;
  }
  printf("\nFactors of %lld: ", number);
  int factors[1]; // Using an array to store the factors
  factors[0] = 1;
  int count = 1;

  for (long long i = 2; i <= sqrt(number); i++) {
    if (number % i == 0) {
      factors[count++] = i;
      number /= i; // Update the number to reduce its size
    }
  }

  // Check if there are any remaining prime factors greater than the square root
  if (number > 1) {
    factors[count] = number;
  }

  for (int i = 0; i < count + 1; i++) {
    printf("%d ", factors[i]);
  }
  printf("\nNumber of factors = %d\n", count);
}

int main() {
  print_factors(-1);
  print_factors(0);
  print_factors(1);
  print_factors(2);
  print_factors(3);
  print_factors(53);
  print_factors(45);
  print_factors(64);
  print_factors(600851475143);
  print_factors(999999999999999989);

  return 0;
}