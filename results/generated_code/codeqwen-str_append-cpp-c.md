The equivalent C code would be:

```c
#include <stdio.h>
#include <string.h>

int main( ) {
    char greeting[] = "Hello";
    strcat(greeting, ", world!");
    printf("%s\n", greeting);
    return 0;
}
```

The `strcat()` function in C is used to concatenate two strings. In this code, it appends the string literal ", world!" to the end of the `greeting` array. The contents of the variable after the append operation are then printed using `printf()`.
