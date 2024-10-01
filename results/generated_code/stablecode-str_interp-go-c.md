Here is the equivalent C code:

```c
#include <stdio.h>

int main() {
    char str[100] = "Mary had a %s lamb";
    char txt[] = "little";
    snprintf(str, sizeof(str)), printf(str, txt);

    return 0;
}
```
The code initializes an array to hold the string and another array to hold the text. The `snprintf` function is used to replace the placeholder in the string with the value of the text variable. Then, the formatted string is printed out using the `printf` function.
