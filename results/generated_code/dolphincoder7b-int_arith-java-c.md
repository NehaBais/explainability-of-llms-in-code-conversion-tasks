Below is the equivalent C code for the given Java program:
```c
#include <stdio.h>
#include <math.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    float quotient = (float) a / b;
    int remainder = a % b;
    
    printf("sum of a and b is: %d\n", sum);
    printf("difference between a and b is: %d\n", difference);
    printf("product of a and b is: %d\n", product);
    printf("quotient of a by b (rounded towards 0) is: %.2f\n", quotient);
    // truncates toward 0

    if(remainder > 0 && b > 0 || remainder < 0 && b < 0){
        printf("remainder of a divided by b is: %d, same sign as the first operand.\n", remainder);
    }else{
        printf("remainder of a divided by b is: %d, opposite sign from the second operand.\n", remainder);
    }

    return 0;
}
```
Note that C does not have exponentiation built-in. Therefore, in this solution, I used the `pow()` function to calculate the power. The `pow(a,b)` function returns the base raised to the power of the exponent.
