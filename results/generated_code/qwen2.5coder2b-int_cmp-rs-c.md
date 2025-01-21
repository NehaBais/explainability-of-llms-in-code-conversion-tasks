The equivalent code in C would look like this:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a, b;
    char buffer[100];
    
    // Get input from user and convert to integers
    if (fgets(buffer, sizeof(buffer), stdin) == NULL || sscanf(buffer, "%d %d", &a, &b) != 2) {
        printf("Invalid input\n");
        return -1;
    }
    
    // Display the comparison based on the values of a and b
    if (a < b) {
        printf("%d is less than %d\n", a, b);
    } else if (a == b) {
        printf("%d equals %d\n", a, b);
    } else {
        printf("%d is greater than %d\n", a, b);
    }

    return 0;
}
```

Please note that this program doesn't handle invalid inputs properly, so it's not suitable for production use.
