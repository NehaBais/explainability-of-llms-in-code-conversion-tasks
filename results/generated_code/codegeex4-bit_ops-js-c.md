Below is the C equivalent of your JavaScript code:

```c
#include<stdio.h>

void bitwise(int a, int b){
    printf("%d AND %d: %d\n", a, b, (a & b));
    printf("%d OR %d: %d\n", a, b, (a | b));
    printf("%d XOR %d: %d\n", a, b, (a ^ b));
    printf("NOT %d: %d\n", a, ~a);
    printf("%d << %d: %d\n", a, b, (a << b)); // left shift
    printf("%d >> %d: %d\n", a, b, (a >> b)); // arithmetic right shift
}

int main(){
   bitwise(10, 3); //Example usage
   return 0;
}
```
Please note that the bitwise NOT operator "~" in C produces negative numbers for positive integers due to how signed numbers are represented in memory. To convert it back to a regular binary number, you can add INT_MAX + 1 (for int) to the result. For unsigned integers, this isn't needed as they already handle bitwise NOT correctly.

Remember that C does not have built-in functionality to perform left or right rotate operations. However, you can implement these by using combinations of shifts and XOR operations. Also, the `alert` function is not available in C, so we use `printf` for output instead.
