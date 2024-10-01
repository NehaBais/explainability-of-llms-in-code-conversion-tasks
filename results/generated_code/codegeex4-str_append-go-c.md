In C, we don't have a built-in string builder but we can use `strcat` function to append strings. Here is your Go code converted into C.

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "foo";
    char str2[] = "bar";

    strcat(str1, str2);

    printf("%s\n", str1);
    
    return 0;
}
```
This code creates a string `str1` with the initial value of `"foo"`. Then it appends the string literal `"bar"` to `str1` using the `strcat` function. Finally, it prints the contents of `str1`.

Please note that this code assumes that the length of `str2` will not exceed 19 characters (to make room for the null-terminator), otherwise you might end up with buffer overflow. A dynamic memory solution would be required in case of varying lengths of strings to append.
