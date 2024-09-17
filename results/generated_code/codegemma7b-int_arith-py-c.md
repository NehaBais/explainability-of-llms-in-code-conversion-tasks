```c
#include <stdio.h>

int main() {
    int input1, input2;

    printf("Enter two integers: ");
    scanf("%d %d", &input1, &input2);

    int qq = input1 + input2;
    printf("Sum: %d\n", qq);

    int ww = input1 - input2;
    printf("Difference: %d\n", ww);

    int ee = input1 * input2;
    printf("Product: %d\n", ee);

    int rr = input1 / input2;
    printf("Integer quotient: %d\n", rr);

    float rr_float = (float)input1 / input2;
    printf("Float quotient: %.2f\n", rr_float);

    float tt = (float)input1 / input2;
    int uu = (int)tt - (int)tt;
    printf("Whole Remainder: %d\n", uu);

    printf("Actual Remainder: %.2f\n", tt - (int)tt);

    int yy = input1 * input1;
    printf("Exponentiation: %d\n", yy);

    return 0;
}
```

