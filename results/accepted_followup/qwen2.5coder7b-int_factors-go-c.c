#include <stdio.h>
#include <stdlib.h>

void apf(int64_t p, int e) {
  // Implement the logic for apf function here.
  // For simplicity, let's just print a message indicating that apf is called.
  printf("apf(%lld, %d) called\n", p, e);
}

void printFactors(int64_t nr) {
  if (nr < 1) {
    printf("\nFactors of %lld not computed\n", nr);
    return;
  }

  int64_t *fs = malloc(sizeof(int64_t)); // Initialize fs array
  fs[0] = 1;                             // The first factor is always 1
  int count = 1;                         // Number of factors

  for (int e = 0; nr & 1 == 0; e++) {
    nr >>= 1; // Right shift to divide by 2
  }

  apf(2, e);

  for (int i = 3; i * i <= nr; i += 2) {
    int e = 0;
    while (nr % i == 0) {
      nr /= i;
      e++;
    }
    if (e > 0) {
      apf(i, e);
    }
  }

  if (nr > 2) {
    apf(nr, 1);
  }

  printf("\nFactors of %lld: ", nr);
  for (int i = 0; i < count; i++) {
    printf("%lld ", fs[i]);
  }
  printf("\n");

  free(fs); // Free the allocated memory
}

int main() {
  printFactors(28); // Test case
  return 0;
}