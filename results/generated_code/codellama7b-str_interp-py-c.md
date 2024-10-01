To convert this code from Python to C, you can use `sprintf()` function. Here is the equivalent code in C:
```
#include <stdio.h>

int main() {
    char extra[] = "little";
    char new_str[50];
    
    sprintf(new_str, "Mary had a %s lamb.", extra);
    printf("%s", new_str);
    
    return 0;
}
```
This code declares an array `extra` to hold the string "little" and a character array `new_str` to hold the interpolated string. The `sprintf()` function is used to perform interpolation on the original string, using the value of the variable `extra` as the replacement for the sequence `X`. The resulting interpolated string is then printed to the console using `printf()`.
