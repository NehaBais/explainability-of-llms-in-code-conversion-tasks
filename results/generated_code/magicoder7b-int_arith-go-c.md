 In C language, you can't directly take input from console like you do in Golang. So, let's consider the scenario where two integers are hard coded for simplicity. Here is your C code:

```c
#include <stdio.h>

int main() {
    int a = 10; // replace with scanf later if input needs to be taken from console
    int b = 2;  // replace with scanf later if input needs to be taken from console

    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %.0f\n", a, b, (double)a/b);  // truncates towards 0
    printf("%d %% %d = %d\n", a, b, a%b); // same sign as first operand
    return 0;
}
```
For taking input from console in C, you should use `scanf` function. For example:

```c
#include <stdio.h>

int main() {
    int a, b;
    printf("enter two integers: ");
    scanf("%d %d", &a, &b);
    
    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %.0f\n", a, b, (double)a/b);  // truncates towards 0
    printf("%d %% %d = %d\n", a, b, a%b); // same sign as first operand
    
    return 0;
}
```
Remember to include `<stdio.h>` header for using `printf`, `scanf` functions.
