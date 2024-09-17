#include
#include
#include
int main() {
  long n;
  printf("Enter a positive integer: ");
  scanf("%ld", &n);
  TreeSet factors = {n, 1};
  for (long test = n - 1; test >= sqrt(n); test--)
    if (n % test == 0) {
      factors.insert(test);
      factors.insert(n / test);
    }
  printf("Factors of %ld:n", n);
  for (auto factor : factors)
    printf("%ldn", factor);
  return 0;
}