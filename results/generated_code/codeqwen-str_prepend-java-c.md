Here's how you can convert this Java code to C:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char string[] = "def";
    strcpy(string, "abc" + string);
    printf("%s", string);
    return 0;
}
```
Please note that C does not support string concatenation directly like Java. Instead, you need to use the `strcpy()` function from `<string.h>` library to copy a string into another location in memory. Also, C strings are stored as arrays of characters and do not have a length like in other languages (like Java). So when using `strcpy()`, we're only copying part of the array into it.
