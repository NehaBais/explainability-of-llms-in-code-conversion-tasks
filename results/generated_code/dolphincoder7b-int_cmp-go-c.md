### Code
```c
#include <stdio.h>
int main() {
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    if (n1 < n2)
        printf("The first number is less than the second number\n");
    else if (n1 == n2)
        printf("The first number is equal to the second number\n");
    else
        printf("The first number is greater than the second number\n");

    return 0;
}
```
