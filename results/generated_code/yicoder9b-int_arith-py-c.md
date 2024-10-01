The C programming language does not support the exponentiation operator '**' that Python does. Also, unlike in python where division of two integers results in a float number with decimal places, in C dividing two integer values gives an integer result (integer division) which is rounded towards zero. The modulus operator % returns the remainder as per the sign of the dividend and divisor.
```c
#include <stdio.h>
int main() {
    // Get input from user
    int input1, input2;
    printf("Enter first number: ");
    scanf("%d", &input1);
    printf("Enter second number: ");
    scanf("%d", &input2);

    // Get the calculations 
    int qq = input1 + input2;
    printf("Sum: %d\n", qq);

    int ww = input1 - input2;
    printf("Difference: %d\n", ww);

    int ee = input1 * input2;
    printf("Product: %d\n", ee);

    // C performs integer division which rounds towards zero. 
    int rr = input1 / input2;
    printf("Integer quotient: %d\n", rr);

    float tt = (float)input1 / (float)input2;
    int uu = input1 % input2;
    printf("Remainder: %d\n", uu);
   // printf("Exponentiation is not supported in C.\n");
  
    return 0;
}
```
