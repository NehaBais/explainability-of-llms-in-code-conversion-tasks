#include <stdbool.h>
#include <stdio.h>

// Function to check if a number is prime
bool is_prime(int num) {
  if (num <= 1)
    return false;
  if (num <= 3)
    return true;

  if (num % 2 == 0 || num % 3 == 0)
    return false;

  int i = 5;
  while (i * i <= num) {
    if (num % i == 0 || num % (i + 2) == 0)
      return false;
    i += 6;
  }

  return true;
}

// Function to find factors of a number
void find_factors(int num) {
  int n_factors = 0;

  // Prime factors
  for (int i = 2; i <= num / 2 && is_prime(i); i++) {
    if (num % i == 0) {
      printf("%d ", i);
      n_factors++;
    }
  }

  // If prime number, add itself
  if (is_prime(num)) {
    printf("%d", num);
    n_factors++;
  }

  // Other factors are found by dividing the number by its factors
  for (int i = 2; i <= num / 2; i++) {
    while (num % i == 0) {
      printf("%d ", i);
      n_factors++;
      num /= i;
    }
  }

  if (n_factors != 0)
    printf("\n");
}

// Main function
int main() {
  find_factors(45); // 1,3,5,9,15,45
  find_factors(53); // 1,53
  find_factors(64); // 1,2,4,8,16,32,64

  return 0;
}