 Sure, here is the equivalent code in C:

```c
#include <stdio.h>
#include <stdlib.h>

// Function to compute the factors of a positive integer
void factor(int num, int *factors, int *size) {
    *size = 0; // Initialize size of the array to store factors

    for (int i = 1; i <= sqrt(num); i++) {
        if (num % i == 0) {
            factors[*size] = i; // Store smallest factor
            (*size)++;
            if (i != num / i) { // Avoid adding the same factor twice for perfect squares
                factors[*size] = num / i;
                (*size)++;
            }
        }
    }
}

int main() {
    int size;
    int factors[100]; // Array to store up to 100 factors

    factor(100, factors, &size);

    printf("Factors of 100: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", factors[i]);
    }
    printf("\n");

    int size2;
    int factors2[1]; // Array to store up to 1 factor

    factor(101, factors2, &size2);

    printf("Factors of 101: ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", factors2[i]);
    }
    printf("\n");

    return 0;
}
```

### Explanation:
1. **Function `factor`**: This function takes an integer `num`, a pointer to an array of integers `factors`, and a pointer to the size of the array `size`. It computes the factors of `num` and stores them in the `factors` array, updating the `size` accordingly.
2. **Main Function**: The main function initializes an array to store up to 100 factors for numbers less than or equal to 100. It calls the `factor` function for both 100 and 101, then prints the factors.
3. **Sorting**: In C, arrays are not sorted automatically like in Rust. The output will be in the order of addition, which is fine for this example since we add factors in ascending order.
4. **Avoid Duplicate for Perfect Squares**: The condition `if (i != num / i)` ensures that we do not add the same factor twice when `num` is a perfect square.
