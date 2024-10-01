```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[20] = "12345678";
    strcat(str, "9!");
    printf("%s\n", str);
    
    return 0;
}
```
In this C code:
1. We include the `stdio.h` and `string.h` libraries to use the input/output functionalities and string manipulation functions respectively.
2. We declare a character array `str` with size 20 and initialize it with "12345678".
3. The `strcat()` function from the `string.h` library is used to append "9!" to the end of `str`.
4. Finally, we use `printf()` to print the contents of `str`.
