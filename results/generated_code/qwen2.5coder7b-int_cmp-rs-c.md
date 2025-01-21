Here's how you can convert the given Rust code to C:
```c
#include <stdio.h>

int main() {
    int nums[2];
    printf("Enter two integers: ");
    for(int i = 0; i < 2; i++){
        scanf("%d", &nums[i]);
    }
    int a = nums[0];
    int b = nums[1];
    
    if(a < b){
        printf("%d is less than %d\n", a, b);
    } else if(a == b){
        printf("%d equals %d\n", a, b);
    } else {
        printf("%d is greater than %d\n", a, b);
    }

    return 0;
}
```
This C code does the same thing as the Rust code: it reads two integers from the user, and then uses if-else statements to compare them and print out an appropriate message based on their relative values.
