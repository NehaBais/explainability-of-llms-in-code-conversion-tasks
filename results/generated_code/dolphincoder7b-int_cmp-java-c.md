```c
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 < num2)
        printf("%d is less than %d\n", num1, num2);
    else if (num1 > num2)
        printf("%d is greater than %d\n", num1, num2);
    else
        printf("%d is equal to %d\n", num1, num2);

    return 0;
}
```
In C, we use `printf` and `scanf` instead of using `BufferedReader` and `InputStreamReader`. We also need to define the comparison operators `==`, `<`, and `>` for comparisons. The function `main()` reads in two integers from the user through `scanf`. The conditional statements `if (num1 < num2)`, `if (num1 > num2)`, and `if (num1 == num2)` then print out the corresponding comparison message for each case.
