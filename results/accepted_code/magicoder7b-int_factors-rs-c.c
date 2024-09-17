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
  int factors[2][]; // Assuming we know the array size is always at most 2.

  for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
    find_factors(numbers[i], factors[i]);
    printf("Factors of %d are: ", numbers[i]);
    print_array(factors[i], sizeof(factors[i]) / sizeof(factors[i][0]));
    printf("\n");
  }

  return 0;
}