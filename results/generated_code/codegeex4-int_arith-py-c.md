```c
#include <stdio.h>
#include <math.h>

int main() {
    int input1, input2;
    printf("Enter the first integer: ");
    scanf("%d", &input1);
    printf("Enter the second integer: ");
    scanf("%d", &input2);

    int qq = input1 + input2;
    printf("Sum: %d\n", qq);
    int ww = input1 - input2;
    printf("Difference: %d\n", ww);
    int ee = input1 * input2;
    printf("Product: %d\n", ee);
    int rr = input1 / input2;
    printf("Integer quotient: %d\n", rr);
    float ff = (float)input1 / input2;
    printf("Float quotient: %.2f\n", ff);
    int uu = fabs(input1 - (int)(ff * input1));
    if(input1 < 0 && input2 > 0){
        uu *= -1; 
    }
    else if(input1 > 0 && input2 < 0){
        uu *= -1;
    }    
    printf("Whole Remainder: %d\n", uu);
    printf("Actual Remainder: %.2f\n", fabs(uu));
    int yy = pow(input1, input2);
    printf("Exponentiation: %d\n", yy);

    return 0;
}
```

This is the equivalent C code. It uses similar logic as your Python script but with some differences in syntax.

Note that C does not have a built-in function for calculating the remainder of a division operation if the operands are negative, so I used(fabs(input1 - (int)(ff * input1))) to get the correct result and checked the sign of the inputs to adjust the sign of the remainder.
