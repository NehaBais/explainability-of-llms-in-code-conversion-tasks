Here is a C version of the JavaScript code you provided:

```c
#include <stdio.h>
#include <math.h>

void factors(int num)
{
    int i;
    printf("Factors: ");
    
    for (i = 1; i <= sqrt(num); i++)
        if (num % i == 0)
        {
            printf("%d ", i);
            if (num / i != i)
                printf("%d ", num / i);
        }
}

int main()
{
    factors(45);  // Factors: 1 3 5 9 15 45
    printf("\n");
    
    factors(53);  // Factors: 1 53
    printf("\n");

    factors(64);  // Factors: 1 2 4 8 16 32 64
    printf("\n");

    return 0;
}
```

This C program computes the factors of a given number and prints them to the console. It iterates from 1 up to the square root of the input number. If a number is divisible by the current iteration value, it means that both this iteration value and the result of the division are factors of the input number, so they are printed out.
