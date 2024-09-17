```c
#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    if (n1 < n2) {
        printf("%d is less than %d\n", n1, n2);
    } else if (n1 == n2) {
        printf("%d is equal to %d\n", n1, n2);
    } else {
        printf("%d is greater than %d\n", n1, n2);
    }

    return 0;
}
```
