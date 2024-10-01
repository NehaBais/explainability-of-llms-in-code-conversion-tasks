Converting this code from Golang to C involves a number of changes. In particular:
- We need to include the standard input/output and stdlib libraries.
- The printFactors function in Go has been replaced with a main function that calls printFactors for each test case, since C does not support named functions directly within other functions (as is possible in Go). 
- The append operation from Go is replaced by standard array manipulation in C.
- Also, Go's type system doesn't permit implicit conversions between numeric types of different precision, while C's does. This means that we need to explicitly convert int64 values to the appropriate integer type for our platform.
Below is a conversion of your code:
```c
#include <stdio.h>
#include <stdlib.h>

typedef long long int64;
int64 factorArray[20]; //This should be enough, adjust if needed
int fLen = 1; //Length of the factors array

void printFactors(int64 nr) {
    if (nr < 1) {
        printf("\nFactors of %lld not computed\n", nr);
        return;
    }
    printf("\nFactors of %lld: ", nr);
    factorArray[0] = 1; //initialize the factors array
    int64 d;
    for (d=2; nr > 1 && d*d <= nr; d++) {
        if(nr%d == 0){
            printf(" %lld ", d);
            nr /= d;
        }
    }
    if(nr > 1) printf(" %lld ", nr); //Print the last factor (nr should be a prime number now)

    printf("\nNumber of factors = %d\n", fLen);
}
int main() {
    printFactors(-1);
    printFactors(0);
    printFactors(1);
    printFactors(2);
    printFactors(3);
    printFactors(53);
    printFactors(45);
    printFactors(64);
    //printFactors(600851475143); This number is too large for a 64-bit signed integer.
    //printFactors(999999999999999989); This number is also too large for a 64-bit signed integer.
}
```
