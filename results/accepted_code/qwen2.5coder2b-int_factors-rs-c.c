#include <stdbool.h>
#include <stdio.h>

bool is_prime(int num) {
  if (num <= 1)
    return false;
  if (num == 2)
    return true;
  if (num % 2 == 0)
    return false;

  for (int i = 3; i * i <= num; i += 2) {
    if (num % i == 0)
      return false;
  }

  return true;
}

void factor(int num, int factors[], int *count) {
  for (int i = 1; i * i <= num; i++) {
    if (num % i == 0) {
      if (!is_prime(i))
        continue;
      factors[*count] = i;
      (*count)++;
      factors[*count] = num / i;
      (*count)++;
    }
  }
}

int main() {
  int factors[100];
  int count = 0;

  factor(100, factors, &count);
  printf("The factors of 100 are: ");
  for (int i = 0; i < count; i++) {
    printf("%d ", factors[i]);
  }
  printf("\n");

  factor(101, factors, &count);
  printf("The factors of 101 are: ");
  for (int i = 0; i < count; i++) {
    printf("%d ", factors[i]);
  }
  printf("\n");

  return 0;
}