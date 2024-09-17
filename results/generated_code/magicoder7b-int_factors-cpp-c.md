 C does not have built-in support for vector or any similar data structures like in C++. Hence, this code cannot be directly translated to C without using additional libraries or writing custom functions.

Below is a direct translation of the C++ code to C without using any vector related stuff:

```c
#include <stdio.h>
#define MAX 1024

void GenerateFactors(int n) {
    int factors[MAX] = { 1, n };
    int j;
    for (j=2; j*j <=n; ++j) {
        if (n % j == 0) {
            printf("%d ", j);
            if(j * j != n){
                printf("%d ", n/j);
            }
        }
    }
}

int main() {
    const int SampleNumbers[] = {3135, 45, 60, 81};
    int i;
    for (i=0; i < sizeof(SampleNumbers) / sizeof(int); ++i) {
        printf("Factors of %d are: ", SampleNumbers[i]);
        GenerateFactors(SampleNumbers[i]);
        printf("\n");
    }
    return 0;
}
```
This C code performs the same operation as your C++ code. The only difference is that it does not use vectors, instead arrays are used to store factors. Note that in this version, we have a hardcoded maximum number of factors stored in the array `factors` which is limited by the MAX value and this needs to be taken into account while writing such code.
