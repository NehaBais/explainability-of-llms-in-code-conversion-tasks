 In C, we don't have built-in functions as in Rust for sorting arrays or creating vectors which makes it a bit challenging to implement the same exact function. Here is an approximation of what you could do:

```c
#include <stdio.h> 
#include <math.h>

void print_array(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
}

void find_factors(int num, int factors[]) {
    int count = 0;
    for (int i=1; i <= sqrt(num); i++) {
        if (num % i == 0) {
            factors[count++] = i;
            if (i != num/i)
                factors[count++] = num / i;
        }
    }
}

int main() {
    int numbers[] = {100, 101};
    int factors[2][]; // Assuming we know the array size is always at most 2.
    
    for (int i=0; i<sizeof(numbers)/sizeof(numbers[0]); i++) {
        find_factors(numbers[i], factors[i]);
        printf("Factors of %d are: ", numbers[i]);
        print_array(factors[i], sizeof(factors[i])/sizeof(factors[i][0]));
        printf("\n");
    }

    return 0;
}
```

This program defines a `find_factors` function which fills the `factors` array with the factors of the passed number. It then calls this function for two numbers, and prints out the resulting arrays. Note that C does not have native support for vectors or dynamic arrays, so instead we use static (predefined) arrays with size known at compile-time.
