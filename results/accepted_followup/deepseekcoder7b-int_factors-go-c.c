#include <stdio.h>
#include <stdlib.<｜begin▁of▁sentence｜>

void printFactors(int64_t nr) {
  if (nr < 1) {
    printf("Factors not computed\n");
    return;
  }
  printf("Factors of %lld: ", nr);
  std::vector<int64_t> factors;
  factors.push_back(1);
  for (int i = 2; (i * i) <= nr; ++i) {
    if ((nr % i) == 0) {
      factors.push_back(i);
      if (i != (nr / i))
        factors.push_back(nr / i);
    }
  }
  factors.push_back(nr); // Push the number itself in case it is a prime number

  for (int64_t f : factors) {
    printf("%lld ", f);
  }

  printf("\nNumber of factors = %lu\n", factors.size());
}

int main() {
  printFactors(-1);
  printFactors(0);
  printFactors(1);
  printFactors(2);
  printFactors(3);
  printFactors(53);
  printFactors(45);
  printFactors(64);
}