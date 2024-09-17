#include
#include
#include
#include
int main() {
  assert(0 == memcmp(factor(100), (int[]){1, 2, 4, 5, 10, 10, 20, 25, 50, 100},
                     5 * sizeof(int)));
  assert(0 == memcmp(factor(101), (int[]){1, 101}, 2 * sizeof(int)));
  return 0;
}
int *factor(int num) {
  int i, sqrt_num = (int)sqrt((float)num);
  int *factors = malloc(
      sizeof(int) * (num + 1)); // creates an array to hold the factors of num

  for (i = 1; i <= sqrt_num; i++) {
    if (num % i == 0) {
      factors[i] = i;
      factors[num / i] = num / i;
    }
  }
  qsort(factors, 1 + num, sizeof(int), compare); // sorts the array of factors

  return factors;
}
int compare(const void *a, const void *b) {
  int aa = *(int *)a;
  int bb = *(int *)b;

  return aa - bb;
}