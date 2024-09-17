The C++ code provided uses the `std::cin` and `std::cout` for input and output. In C, these features are achieved with `scanf` and `printf`. Here's how you can convert your code:

```c
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Sum: %d\n", a + b);
    printf("Difference: %d\n", a - b);
    printf("Product: %d\n", a * b);
    printf("Integer Quotient: %d\n", a / b);
    printf("Remainder: %d\n", a % b);
    return 0;
}
```
Note that the division operation in C, unlike some other programming languages, uses floor division. This means it rounds down towards zero rather than to positive or negative infinity as with some languages like Python or Java.

The `%%` is used in the `printf` statement to print a literal `%` character. 

And remember that in C there's no built-in exponentiation operator as in C++, you might need to use an external library for this, such as the mathematical library `<math.h>`.
