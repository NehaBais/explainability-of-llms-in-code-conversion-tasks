The error message indicates that there are undefined symbols for architecture arm64 - specifically, "_main". This is often caused by missing main() function declaration as entry point to C program. 

To fix this issue, we need to include a proper "main()" function in our code that will call the factors method and print out its results. Here's how you can rewrite it:

```c
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) { return (*(long*)a - *(long*)b); }

void factors(long n, long** result, int* size){
    *size = 0;
    long* arr = malloc(n / 2 * sizeof(long));
  
    for (long i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            arr[(*size)++] = i;
            if (i != n / i){
                arr[(*size)++] = n/i;
            }
        } 
    }
  
    qsort(arr, *size, sizeof(long), compare);
    *result = arr;
}

int main() {
    long num = 24; // for example
    int size;
    long* fact_array;
    factors(num, &fact_array, &size);
  
    printf("Factors of %ld are: ", num);
    for (int i = 0; i < size; ++i){ 
        printf("%ld ", fact_array[i]);
    }
    free(fact_array); // remember to deallocate the memory
  
    return 0;
}
```
This corrected code now includes a main function which calls "factors" and prints out its results, allocates and deallocates necessary memory for "fact_array", and also handles freeing of dynamically allocated array. Please replace `24` with the number you want to find factors for. The factors will be printed in ascending order by the program.

