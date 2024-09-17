Below is the C equivalent of the JavaScript code provided:

```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int a = atoi(argv[1]); // convert string to integer using 'atoi' function
    int b = atoi(argv[2]);

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    double division = (double)a / (double)b;  // use double for precision
    int remainder = a % b;   // This produces the remainder after dividing 'b' into 'a'. The  '%' operator is called the 'modulo' operator

    printf("a + b = %d\n", sum);  
    printf("a - b = %d\n", difference);
    printf("a * b = %d\n", product);
    printf("a / b = %.2f (rounding to 2 decimal places)\n", division);
    printf("a %% b = %d\n", remainder);

    return 0;
}
```
This program converts the input parameters of the command line into integers and performs various calculations on them. The `printf` statements are used to display the results, with placeholders `%d`, `%f` and `%d` for integer, floating point number and integer division respectively. The parentheses around the operands in the division operation `a / b` are necessary to ensure that `/` is evaluated before `%`. Note that `double` is used for precision when performing division.

Note that in C, string comparisons using `==` or `!=` can give unexpected results due to the fact that strings are treated as arrays of characters. To compare two strings, you should use the function `strcmp(s1, s2)` which returns zero if the strings are equal, a negative value if `s1` is less than `s2`, and a positive value otherwise.
