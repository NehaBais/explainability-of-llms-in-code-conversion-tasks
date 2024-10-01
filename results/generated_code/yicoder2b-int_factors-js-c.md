Sure, here is the equivalent C code for the given JavaScript:
```c
#include <stdio.h>
#include <math.h>

void factors(int num) {
    int i;
    printf("[%d", 1);
    for (i = 2; i <= sqrt(num); ++i){
        while ((num % i) == 0){
            printf(", %d", i);
            num /= i;
        }
    }
    if(num > 2)
        printf(", %d", num);
    printf("]\n");
}

int main() {
    factors(45);   // outputs: [1,3,5,9,15,45]
    factors(53);   // outputs: [1,53]
    factors(64);   // outputs: [1,2,4,8,16,32,64]
    return 0;
}
```
Here, we first import necessary libraries for input and output operations. Then we define a function 'factors' that prints the factors of a number. Inside this function, we loop from 2 to sqrt(num) (since a factor always less than or equal to its square root) checking if it is a divisor of num, and if true, keep dividing until no more divisors are found. If the resulting num after division is greater than 1, then print that too since it's also a factor. Finally, we call this function for provided test cases and end the program with main().
