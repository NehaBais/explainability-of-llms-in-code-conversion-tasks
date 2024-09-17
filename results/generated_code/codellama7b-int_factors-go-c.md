
Here's the C code for the same program:
```C
#include <stdio.h>
#include <math.h>

// Function to compute the factors of a positive integer
void printFactors(int nr) {
    if (nr <= 0) { // If the number is negative or zero, do not proceed with computation
        return;
    }
    int i, j; // Loop variables
    int e = 0; // Exponent variable
    int d = 2; // Divisor variable
    int fs[1]; // Array to store the factors
    fs[0] = 1; // Initialize array with the factor of 1

    // Function to append a new factor to the end of the array
    void apf(int p, int e) {
        for (i = 0; i < e; i++) {
            fs = append(fs, fs[i] * p);
        }
    }

    // Compute the factors of 2, which is a prime number
    while (nr > 1 && nr & 1 == 0) {
        nr >>= 1;
        e++;
    }
    apf(2, e);

    // Compute the factors of other prime numbers greater than 2
    for (d = 3; d <= sqrt(nr); d += 2) {
        if (d * d > nr) {
            d = nr;
        }
        e = 0;
        while (nr % d == 0) {
            e++;
            nr /= d;
        }
        if (e > 0) {
            apf(d, e);
        }
    }

    // Print the factors and their count
    printf("Factors of %d: ", nr);
    for (i = 1; i < len(fs); i++) {
        printf("%d ", fs[i]);
    }
    printf("\nNumber of factors = %d\n", len(fs));
}

int main() {
    int64_t nr; // Integer variable to store the input number

    // Print the factors for different numbers
    printFactors(-1); // Negative numbers have no factors
    printFactors(0); // Zero has one factor, which is 1
    printFactors(1); // One has two factors, which are 1 and itself
    printFactors(2); // Two has two factors, which are 1 and itself
    printFactors(3); // Three has three factors, which are 1, 3, and itself
    printFactors(53); // Five has four factors, which are 1, 3, 11, and itself
    printFactors(45); // Seven has eight factors, which are 1, 7, 13, 29, 37, 49, 61, and itself
    printFactors(64); // Eight has ten factors, which are 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, and itself
    printFactors(600851475143); // Large number has a large number of factors
    printFactors(999999999999999989); // Large number has a large number of factors
}
```
Note that the C code uses `int` data type for variables, which may not be sufficient to store very large numbers. In such cases, it is recommended to use `long long int` or `unsigned long long int` data types instead.
