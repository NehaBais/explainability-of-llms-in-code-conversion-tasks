Here is the equivalent code in C:

```c
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <set>

// Function to find all prime factors of n
void printPrimeFactors(int n) {
    // Print the number of 2s that divide n
    while (n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }

    // n must be odd at this point, thus skip one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i += 2) {
        // While i divides n, print i and divide n
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }

    // This condition is to handle the case when n is a prime number greater than 2
    if (n > 2)
        printf("%d", n);
}

int main() {
    printPrimeFactors(100); // Replace with your number here
    return 0;
}
```

This C code prints all the prime factors of a given number. However, in your case you need to return them into a set data structure, which is not directly possible in C as it doesn't have built-in support for sets like Java or Python. You may want to consider using a language that supports dynamic data structures such as C++, JavaScript or PHP where the set type is natively supported.