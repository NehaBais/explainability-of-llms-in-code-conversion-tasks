#include <stdio.h>

// Function to compute factors of a number
void printFactors(long long nr) {
  if (nr < 1) {
    printf("Factors of %lld not computed\n", nr);
    return;
  }
  printf("Factors of %lld: ", nr);

  // Initialize array to store factors
  int64_t *fs = (int64_t *)malloc(sizeof(int64_t));
  fs[0] = 1;
  int n = 1;

  long long p = 2, e = 0;
  while (nr & 1 == 0) {
    nr >>= 1;
    e++;
  }
  addFactor(fs, n++, e);

  for (; nr > 1; p += 2) {
    if (p * p > nr) {
      p = nr;
    }
    e = 0;
    while (nr % p == 0) {
      nr /= p;
      e++;
    }
    if (e > 0) {
      addFactor(fs, n++, e);
    }
  }

  // Print factors
  for (int i = 0; i < n; i++) {
    printf("%lld ", fs[i]);
  }
  printf("\n");
  free(fs);
  printf("Number of factors = %d\n", n);
}

// Function to add a factor to the array
void addFactor(int64_t *fs, int *size, int e) {
  for (int i = 0; i < *size; i++) {
    if (fs[i] == e) {
      return;
    }
  }
  fs[*size++] = e;
}

// Main function
int main() {
  printFactors(-1);
  printFactors(0);
  printFactors(1);
  printFactors(2);
  printFactors(3);
  printFactors(53);
  printFactors(45);
  printFactors(64);
  printFactors(600851475143);
  printFactors(999999999999999989);
  return 0;
}