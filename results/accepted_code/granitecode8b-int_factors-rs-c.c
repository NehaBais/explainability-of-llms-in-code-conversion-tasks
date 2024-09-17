#include
#include
#include
void factor(int num, int *factors) {
  int i;
  for (i = 1; i <= sqrt(num); i++) {
    if (num % i == 0) {
      factors[i - 1] = i;
      factors[sqrt(num) - 1 + i] = num / i;
    }
  }
}
int main() {
  int num = 100;
  int *factors = malloc(sizeof(int) * (sqrt(num) + 1));
  factor(num, factors);
  for (int i = 0; i < sqrt(num) + 1; i++) {
    printf("%d ", factors[i]);
  }
  return 0;
}