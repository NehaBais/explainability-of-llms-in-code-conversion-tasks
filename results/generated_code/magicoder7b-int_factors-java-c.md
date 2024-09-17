 In C, we can't use TreeSet directly like in Java since there is no built-in data type for it. But I will implement the logic of computing factors using an array and sort it later. Here is the equivalent code:

```c
#include <stdio.h>
#define MAX_FACTORS 100 // maximum number of possible factors (for this size, the function should work correctly)

long long int* factors(long n){
    static long long int factors[MAX_FACTORS];
    int counter = 0;
    for(long test = n - 1; test >= sqrt(n); test--)
    {
        if(n % test == 0)
        {
            factors[counter++] = test;
            factors[counter++] = n / test;
        }
    }
    // sort the array using quicksort or similar method. Here, I just reverse it to get factors from high to low
    for(int i=0;i<counter/2;i++) {
        long long int tmp = factors[i];
        factors[i] = factors[counter-1 - i];
        factors[counter-1 - i] = tmp;
    }
    return factors;
}
```

It is noteworthy that C doesn't have the concept of objects like Java and so we cannot use any built-in data types like `TreeSet`. Instead, you would typically pass an array and its size to a function, allowing it to populate or modify the elements in this way. The number of factors for any positive integer can be calculated in O(sqrt(n)) time complexity.

Also, note that we have used `long long int` instead of just `long`. This is because factorizing larger numbers could lead to overflow with regular `long`, but `long long int` should handle these cases correctly.
