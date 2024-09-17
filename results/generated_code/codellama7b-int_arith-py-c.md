
Here's the C code that corresponds to the Python code you provided:
```
#include <stdio.h>
#include <math.h>

int main() {
    int input1, input2;
    printf("Enter two integers: ");
    scanf("%d %d", &input1, &input2);

    int qq = input1 + input2;
    printf("Sum: 		  %d\n", qq);

    int ww = input1 - input2;
    printf("Difference: 	  %d\n", ww);

    int ee = input1 * input2;
    printf("Product: 	  %d\n", ee);

    int rr = input1 / input2; // integer division
    printf("Integer quotient: %d\n", rr);

    float fr = (float)rr / input2; // fractional part of the result
    printf("Float quotient:   %.1f\n", fr);

    int tt = round(fr); // round to nearest integer
    printf("Whole Remainder:  %d\n", tt - rr);

    float uu = fr - (float)tt;
    printf("Actual Remainder: %.1f\n", uu * 10.0);

    int yy = pow(input1, input2); // exponentiation
    printf("Exponentiation:   %d\n", yy);

    return 0;
}
```
Note that the `math.h` header file is included to provide functions for mathematical operations such as `pow()` for exponentiation. The `round()` function is also used to round the result of the division operation to the nearest integer. Finally, the fractional part of the result is calculated and then multiplied by 10 to get the actual remainder.

Also note that in C, the `/` operator performs both integer and floating-point division depending on the operands' types. Therefore, we need to cast the result of the division operation to `float` to perform fractional division.
