This JavaScript code is being converted to C as follows:

```C
#include <stdio.h>

int main() {
    // The argv array contains the command-line arguments passed to the program.
    // It's equivalent to process.argv in the provided JavaScript code snippet.
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    float quotient = (float)a / b; // Note the use of float for division to avoid integer truncation
    int remainder = a % b;  // This produces the remainder after dividing 'b' into 'a'. The '%' operator is called the modulo operator in C

    if ((remainder < 0 && a > 0) || (remainder >= 0 && a <= 0)) {
        printf("The sign of remainder does not match the signs of first and second operands\n");
    } else if (a > b){
        printf("Towards positive infinity, towards negative zero\n");
    }else{
        printf("Towards negative infinity, towards positive zero\n");
    }  
    // The %d syntax is a placeholder that is replaced by the sum, difference, product, quotient and remainder values.
    printf("a + b = %d\na - b = %d\na * b = %d\na / b = %.2f\na %% b = %d\n", sum, difference, product, quotient, remainder);
    return 0; // Indicates successful program execution in C
}
```
Please note that the division operator 'a / b' will give a float value because of this line: `quotient = (float)a / b`. It’s also worth noting that for negative integers, modulo operation may not work as expected due to rounding towards zero rule.
