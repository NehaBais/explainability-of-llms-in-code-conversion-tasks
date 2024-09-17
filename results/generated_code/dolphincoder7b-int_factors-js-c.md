This is a simple JavaScript function that computes the factors of a given positive integer. It uses a nested loop to find all factors less than or equal to the square root of the number and then checks if the factor divides the original number evenly. If it does, we add both the current factor and its reciprocal (if not already present) to our list of factors. Finally, the function sorts this list in ascending order using a callback function.
Here is the equivalent C code:
```c
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int* factors(int num, int* returnSize) {
    // Find number of factors
    *returnSize = 0;
    for (int i = 1; i <= sqrt(num); i++)
        if (num % i == 0)
            (*returnSize)++;
    
    // Initialize array to store factors
    int* factorArr = malloc((*returnSize)*sizeof(int));
    int index = 0;
    
    // Loop through factors and add to array
    for (int i = 1; i <= sqrt(num); i++)
        if (num % i == 0) {
            factorArr[index++] = i;
            
            // Add reciprocal of current factor only if it's not the same as current factor
            if ((num/i != i))
                factorArr[index++] = num/i;
        }
    
    // Sort array in ascending order
    qsort(factorArr, *returnSize, sizeof(int), compare);
    
    return factorArr;
}

// Callback function for sorting (compares two integers)
int compare(const void* a, const void* b) {
    int A = *(int*)a;
    int B = *(int*)b;
    if (A < B)
        return -1;
    else if (A > B)
        return 1;
    return 0;
}
```
