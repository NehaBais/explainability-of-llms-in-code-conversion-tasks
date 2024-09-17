Below is the equivalent C code:
```c
#include <stdio.h>
#include <string.h>
int main() {
    int num1, num2;
    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);
    
    if (num1 < num2)
        printf("%d is less than %d\n", num1, num2);
        
    else if (num1 == num2) 
        printf("%d equals %d\n", num1, num2);
        
    else if (num1 > num2) 
        printf("%d is greater than %d\n", num1, num2); 
}
```
In C, the `scanf` function reads formatted input. The format string `"%d"` tells `scanf` to read a decimal integer value from the input stream. The ampersand `&` in front of `num1` and `num2` indicates that they are addresses for variables.
The program uses conditional statements (`if`, `else if`, and `else`) to determine which message to display based on the comparison results. C does not have the string formatting features like in Rust, so we need to manually construct strings using `printf`. The `%d` format specifier is used to print integers.
Note that this code requires a console input/output (cin/cout) environment for running.

