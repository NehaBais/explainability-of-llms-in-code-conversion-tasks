 In C, the code would look like this:

```c
#include <stdio.h>
#define SIZE 100

int main() {
    char s[SIZE] = "12345678";
    strncat(s, "0", SIZE); // by concatenation
    printf("%s\n", s);
    
    return 0;
}
```
This code declares a string array `s` with the value `"12345678"`. It then appends `"0"` to the end of `s` using the function `strncat()`, which is provided by C standard library. The resulting string is printed out with `printf()`.
