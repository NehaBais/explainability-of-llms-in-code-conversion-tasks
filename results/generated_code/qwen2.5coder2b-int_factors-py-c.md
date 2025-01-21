The equivalent code in C is as follows:

```c
#include <stdio.h>
#include <math.h>

// Function to compute the factors of a positive integer
int* factor(int n) {
    int *factors = (int *)malloc(n * sizeof(int));
    int count = 0;
    
    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            factors[count++] = i;
            if (i != n / i)
                factors[count++] = n / i;
        }
    }

    factors[count] = -1; // To mark the end of the array
    return factors;
}

int main() {
    int numbers[] = {45, 53, 64};
    
    for (int i : numbers) {
        int *factors = factor(i);
        printf("%i: factors: ", i);

        while (*factors != -1) {
            printf("%d, ", *factors);
            ++factors;
        }
        
        printf("\n");
        
        free(factors); // Don't forget to free the memory allocated by the function
    }

    return 0;
}
```

In this program, we define a function `factor` that takes an integer as input and returns an array of its factors. It uses a loop to iterate from 1 up to the square root of the number and checks if each number divides the given number without a remainder. If it does, it adds both the divisor and its corresponding quotient (if they are different) to the array of factors.

In the `main` function, we declare an array of numbers and then call the `factor` function for each number in the array. The resulting array is printed out along with the number itself. Finally, we free the memory allocated for the factor arrays using `free`.

Please note that this code does not handle negative numbers or non-integer inputs as it does not check the validity of the input before processing it. For real-world use, more robust error handling would be required.
