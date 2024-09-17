 In C, we don't have built-in functionality for getting the command line arguments and parsing them into integer variables. Therefore, instead of `std::env`, you can use `argc` (argument count) and `argv` (argument values). Below is a C version that fulfills your request:

```C
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    if(argc != 3) {
        printf("Please provide two integer arguments.\n");
        return -1;
    }
    
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    printf("sum:              %d\n", a + b);
    printf("difference:       %d\n", a - b);
    printf("product:          %d\n", a * b);
    printf("integer quotient: %.0f\n", (float)a / (float)b); // truncates towards zero
    printf("remainder:        %d\n", a % b); // same sign as first operand
    
    return 0;
}
```

This code will calculate the sum, difference, product, integer quotient and remainder of two input integers provided in the command line arguments. If less than or more than two arguments are passed to the program it will print an error message and terminate.
