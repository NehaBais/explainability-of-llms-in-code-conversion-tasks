Below is the C code equivalent to your Golang program with some specific modifications for better readability and error checking. The main difference being that you'll need to use `scanf` instead of `Scanln`, and `printf` statements are used directly rather than a formatted print statement in Go style syntax:

```c
#include <stdio.h>

int main() {
    int a, b;
    
    printf("enter two integers: ");
    scanf("%d %d", &a, &b);
  
    printf("\n%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    
    if (b != 0) {  //avoid divide by zero
      printf("%d / %d = %d\n", a, b, a/b);   // truncates towards 0
      printf("%d mod %d = %d\n", a, b, a%b); // same sign as first operand
    } else {
        printf("Cannot divide by zero.\n");
    }
    
    return 0;
}
```
This program will print the sum, difference, product and quotient of two integers. It also checks for divide-by-zero case before performing division or modulo operation to avoid runtime errors. The expression `a%b` gives remainder when `a` is divided by `b` and has same sign as the divisor `b` (truncated towards zero). If you want it to have the same sign as dividend, change this line to `printf("%d mod %d = %d\n", a, b, (a%b) ? (a%b): b);`

