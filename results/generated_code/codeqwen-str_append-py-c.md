Here is your code converted to C:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "12345678";
    strcat(str, "9!");
    printf("%s\n", str);
    return 0;
}
```
This program first declares a character array (or string) variable named `str`, initialized with the value `"12345678"`. Then it uses the `strcat()` function to append the string literal `"9!"` to the end of `str`. Finally, it prints out the contents of `str` using `printf()`.
