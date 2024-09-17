The equivalent C code for the provided Rust program would be -

```c
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);
    
    if (a < b) {
        printf("%d is less than %d\n", a, b);
    } else if (a == b) {
        printf("%d equals %d\n", a, b);
    } else if (a > b) {
        printf("%d is greater than %d\n", a, b);
    }
    
    return 0;
}
```
This program prompts the user for two integers and checks which one of them is smaller, equal or larger by using comparison operators. It displays different messages according to each case separately.

