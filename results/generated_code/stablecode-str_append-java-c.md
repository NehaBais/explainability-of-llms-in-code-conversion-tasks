Here is the equivalent C code:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char string[] = "abc";

    printf("%s\n", string);

    strcat(string, "def");

    printf("%s\n", string);

    return 0;
}
```
This C code does the same thing as the given Java code. It declares a character array named `string` and initializes it to the string `"abc"`. The program then prints out the contents of `string`, appends the string `"def"` to `string`, and then prints out the new contents of `string`.
