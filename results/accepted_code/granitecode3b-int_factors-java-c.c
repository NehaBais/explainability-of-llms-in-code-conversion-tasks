#include
#include
#include
int main() {
  long n, i;
  printf("Enter a positive integer: ");
  scanf("%ld", &n);
  printf("Factors of %ld are:n", n);
  for (i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      printf("%ld x %ld = %ldn", i, n / i, n);
    }
  }
  return 0;
}