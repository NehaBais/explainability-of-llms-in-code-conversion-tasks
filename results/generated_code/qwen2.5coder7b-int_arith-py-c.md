Here is a C version of your Python code. Note that, in order to handle the remainder and quotient operations similarly to Python, we must use division with truncation (`/`) for integer division, and the modulus operator (`%`) for getting the remainder.

```C
#include <stdio.h>

int main() {
    int input1, input2;
    
    printf("Enter two integers: ");
    scanf("%d %d", &input1, &input2);

    int sum = input1 + input2;
    printf("Sum:          %d\n", sum);
  
    int difference = input1 - input2;
    printf("Difference:   %d\n", difference);
    
    int product = input1 * input2;
    printf("Product:      %d\n", product);
  
    int quotient = input1 / input2;
    printf("Integer Quotient:  %d\n", quotient);
   
    int remainder = input1 % input2;
    printf("Remainder:    %d\n", remainder);

    int exponentiation = (int)pow(input1, input2);
    printf("Exponentiation:   %d\n", exponentiation);
    
    return 0;
}
```

This C program first reads two integers from the user. It then calculates and prints their sum, difference, product, integer quotient, remainder, and exponentiation.

Note:
- `pow` function is used to calculate power in C.
- For rounding towards zero for quotient, we simply use `/`.
- For getting a signed remainder, we can directly use `%`. The sign of the remainder will match the sign of the first operand if they are different. If both operands have same signs, the result would also be positive.

Also note that, C does not provide direct support for floating point exponentiation, so we use `pow` function which is defined in `math.h` header file.
