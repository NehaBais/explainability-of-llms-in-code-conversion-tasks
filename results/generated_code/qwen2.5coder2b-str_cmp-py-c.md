In C, we don't have a built-in string comparison mechanism like in Python. However, we can use libraries such as `string` and `ctype` to accomplish this task.

Here is how you would write the equivalent function in C:

```c
#include <stdio.h>
#include <ctype.h>

void compare(const char *a, const char *b) {
    printf("%s is of type %s and %s is of type %s\n", a, 
           (a != NULL) ? "string" : "NULL", b, 
           (b != NULL) ? "string" : "NULL");

    if (strcmp(a, b) < 0) {
        printf("%s is strictly less than %s\n", a, b);
    } else if (strcmp(a, b) == 0) {
        printf("%s is equal to %s\n", a, b);
    } else if (strcmp(a, b) > 0) {
        printf("%s is strictly greater than %s\n", a, b);
    }
}

int main() {
    compare("YUP", "YUP");
    compare("BALL", "BELL");
    compare("24", "123");
    compare(24, 123);
    compare(5.0, 5);

    return 0;
}
```

This program uses `strcmp()` function from the `<string.h>` header to perform string comparison. The `cmpstr()` function returns a negative value if the first string is less than the second one, zero if they are equal, and a positive value if the first string is greater than the second one.

Remember that C does not have built-in support for string sorting or numeric comparison as Python does. You will need to implement these functionalities yourself or use additional libraries like `stdlib.h` for basic sorting functions.

The code above will print out the type of each input, whether they are strings or NULL pointers, and how they compare (strictly less than, equal to, etc.)
