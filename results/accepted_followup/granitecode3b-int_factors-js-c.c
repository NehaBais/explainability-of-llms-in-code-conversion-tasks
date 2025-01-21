#include
int main() {
  int num = 45;
  int i, sqrt_num = (int)sqrt(num);
  printf("Factors of %d are:n", num);
  for (i = 1; i <= sqrt_num; i++) {
    if (num % i == 0) {
      printf("%dn", i);
      if (i != (num / i))
        printf("%dn", num / i);
    }
  }
  return 0;
}