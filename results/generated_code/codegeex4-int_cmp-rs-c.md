```c
#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Enter first integer: ");
    scanf("%d", &num1);
    
    printf("Enter second integer: ");
    scanf("%d", &num2);

    if(num1 < num2)
        printf("%d is less than %d\n" , num1 , num2);
    else if(num1 == num2) 
        printf("%d equals %d\n" , num1 , num2);
    else
        printf("%d is greater than %d\n" , num1 , num2);

    return 0;
}
```
