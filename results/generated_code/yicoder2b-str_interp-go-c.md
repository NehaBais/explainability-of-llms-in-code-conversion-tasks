The equivalent C code for the given Golang code would be as follows - 

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str = "Mary had a %s lamb";
    char *txt = "little";
    printf(str, txt);
    return 0;
}
```
This program takes the same input string and variable value (a string). It then prints out the interpolated result of the string. The `Sprintf` function from the `fmt` package in Go is equivalent to the `printf` function in C, with a slightly different syntax, but the functionality is similar.
