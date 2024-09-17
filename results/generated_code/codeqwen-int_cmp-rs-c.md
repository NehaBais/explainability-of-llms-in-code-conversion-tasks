The given code in Rust is already written in C, you just have to use the standard input and output operations. Here's an equivalent code:

```c
#include <stdio.h>

int main() {
    int A;
    int b;
    printf("Enter two integers:\n");
    scanf("%d %d", &A, &b);
    if (A < b) {
        printf("%d is less than %d\n" , A , b);
    } else if (A == b) {
        printf("%d equals %d\n" , A , b);
    } else {
        printf("%d is greater than %d\n" , A , b);
    };

    return 0;
}
```
This C code will read two integers from the user using `scanf` and compare them. If A < B, it will print "A is less than B". If A = B, it will print "A equals B". Otherwise, it prints "A is greater than B".
