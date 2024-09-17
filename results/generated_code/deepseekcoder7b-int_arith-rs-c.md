The equivalent C code for the provided Rust program is below:

Please note that in C, we usually use `atoi()` to convert string to integer and there's no built-in way to get command line arguments. So we need to adapt a bit according to the system we are using, this example assumes you are working on a Unix based environment where the program can take inputs from the terminal:

```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) 
{
    if (argc != 3) {
        printf("Please provide two integer parameters.\n");
        return -1;
    }
    
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
      
    // Note: We are assuming the operands to be non-negative. 
    printf("sum:              %d\n", a + b);
    printf("difference:       %d\n", a - b);
    printf("product:          %d\n", a * b);
    
    // integer quotient (rounded towards zero)
    if(b != 0){
        printf("integer quotient:  %d\n", a / b);  
    }else{
        printf("Second operand can't be zero.\n");
    }
    
    // remainder (same sign as first operand)
    if(b != 0){
        printf("remainder:         %d\n", a % b);  
    }else{
        printf("Second operand can't be zero.\n");
    } 
    
    return 0;
}
```
In this C code, we first check if there are exactly two command line arguments. If not, an error message is displayed and -1 is returned indicating the program was unsuccessful. Then it converts these two arguments from string to integer using `atoi()` function. After that, all the mathematical operations are performed as in Rust code and they are printed out via `printf()`.

