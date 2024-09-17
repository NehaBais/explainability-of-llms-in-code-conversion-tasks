Here is the equivalent C code for your Java method:

```C
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int compare (const void * a, const void * b) {
    return ( *(long*)a - *(long*)b );
}

void factors(long n, long** result, int* size) 
{
    *size = 0;
    long* arr = malloc(n/2 * sizeof(long));
    
    for(long i=1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            arr[(*size)++] = i; 
            if(i != n / i) {
                arr[(*size)++] = n/i;   
            }
        }
    }
    
    qsort(arr, *size, sizeof(long), compare);
    *result = arr;
}
```
In the C version of your Java code, instead of using TreeSet in Java which is essentially a sorted set, we use an array to store factors and sort it with `qsort()`. 

The function takes three parameters: the number you want to find factors for, a pointer to a long int pointer that will receive the resulting factors, and a pointer to an integer that receives the size of the result array. We have to use pointers because we are returning dynamically allocated memory from this function (allocated with `malloc()`). 

The returned values are sorted in ascending order as required by your original Java method using the compare function for qsort(). This is equivalent to the TreeSet functionality in Java.

