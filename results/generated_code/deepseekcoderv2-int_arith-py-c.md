Answer: Here is the C code that performs the same operations as the given Python code:

```c
#include <stdio.h>
#include <math.h>

int main() {
    int input1, input2;
    
    printf("Enter first integer: ");
    scanf("%d", &input1);
    printf("Enter second integer: ");
    scanf("%d", &input2);
    
    // Sum
    int sum = input1 + input2;
    printf("Sum: %d\n", sum);
    
    // Difference
    int difference = input1 - input2;
    printf("Difference: %d\n", difference);
    
    // Product
    int product = input1 * input2;
    printf("Product: %d\n", product);
    
    // Integer quotient and remainder (towards zero)
    int quotient_towards_zero = input1 / input2;
    int remainder_towards_zero = input1 % input2;
    printf("Integer quotient (towards zero): %d\n", quotient_towards_zero);
    printf("Remainder (towards zero): %d\n", remainder_towards_zero);
    
    // Integer quotient and remainder (towards negative infinity)
    int quotient_towards_negative = input1 / -input2;
    int remainder_towards_negative = input1 % -input2;
    printf("Integer quotient (towards negative): %d\n", quotient_towards_negative);
    printf("Remainder (towards negative): %d\n", remainder_towards_negative);
    
    // Float quotient
    float float_quotient = (float) input1 / input2;
    printf("Float quotient: %.6f\n", float_quotient);
    
    // Exponentiation
    double exponentiation = pow(input1, input2);
    printf("Exponentiation: %lf\n", exponentiation);
    
    return 0;
}
```
