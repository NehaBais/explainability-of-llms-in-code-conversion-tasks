In C, you can't directly concatenate strings like in Java. Also, variables in C need to be explicitly declared before they are used. So the equivalent code will look something like this:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char string[] = "def";

    // Prepend the string variable with another string literal.
    strcat(string, "abc"));

    printf("%s\n", string);

    return 0;
}
```
This program will print `abcdef` to the console. The function `strcat()` is used here to concatenate the two strings - "abc" and the original value of `string`.
