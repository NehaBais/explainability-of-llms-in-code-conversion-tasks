#include <math.h>
#include <stdio.h>

void print_array(int arr[], int n) {
  for (int i = 0; i < n; ++i) {
    printf("%d ", arr[i]);
  }
}

void find_factors(int num, int factors[]) {
  int count = 0;
  for (int i = 1; i <= sqrt(num); i++) {
    if (num % i == 0) {
      factors[count++] = i;
      if (i != num / i)
        factors[count++] = num / i;
    }
  }
}

int main() {
  int numbers[] = {100, 101};
  for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
    find_factors(numbers[i], factors); // Assume 'factors' is defined as int
                                       // factors[100]; somewhere before.
    printf("Factors of %d are: ", numbers[i]);
    print_array(factors, count);
    printf("\n");
  }

  return 0;
}