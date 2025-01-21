To convert the given Go code to C, we need to create a C program that computes the factors of a given positive integer. Here is the corresponding C code:

```c
#include <stdio.h>

// Function to compute factors of a number
void printFactors(long long nr) {
    if (nr < 1) {
        printf("Factors of %lld not computed\n", nr);
        return;
    }
    printf("Factors of %lld: ", nr);
    
    // Initialize array to store factors
    int64_t *fs = (int64_t *)malloc(sizeof(int64_t));
    fs[0] = 1;
    int n = 1;
    
    long long p = 2, e = 0;
    while (nr & 1 == 0) {
        nr >>= 1;
        e++;
    }
    addFactor(fs, n++, e);
    
    for (; nr > 1; p += 2) {
        if (p*p > nr) {
            p = nr;
        }
        e = 0;
        while (nr % p == 0) {
            nr /= p;
            e++;
        }
        if (e > 0) {
            addFactor(fs, n++, e);
        }
    }
    
    // Print factors
    for (int i = 0; i < n; i++) {
        printf("%lld ", fs[i]);
    }
    printf("\n");
    free(fs);
    printf("Number of factors = %d\n", n);
}

// Function to add a factor to the array
void addFactor(int64_t *fs, int *size, int e) {
    for (int i = 0; i < *size; i++) {
        if (fs[i] == e) {
            return;
        }
    }
    fs[*size++] = e;
}

// Main function
int main() {
    printFactors(-1);
    printFactors(0);
    printFactors(1);
    printFactors(2);
    printFactors(3);
    printFactors(53);
    printFactors(45);
    printFactors(64);
    printFactors(600851475143);
    printFactors(999999999999999989);
    return 0;
}
```

### Explanation:
1. **PrintFactors Function**: This function takes a long long integer as input and prints its factors.
   - It first checks if the number is less than 1, in which case it prints an error message and returns.
   - Otherwise, it initializes an array to store factors and calculates their count.
   - The function uses nested loops to find prime factors of the number and appends them to the array using the `addFactor` function.
   - Finally, it prints the factors and the number of factors.

2. **AddFactor Function**: This function adds a factor to an existing array of factors.
   - It iterates through the array to check if the factor is already present.
   - If not, it appends the factor to the end of the array and increments the size counter.

3. **Main Function**: This is the entry point of the program. It calls `printFactors` for a range of test cases to demonstrate its functionality.
