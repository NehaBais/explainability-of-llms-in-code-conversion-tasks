Here is the equivalent C code for your Python requirement. 

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[15] = "123456";
    char append_str[] = "9!";

    // Append operation in C
    strcat(str, append_str);

    printf("The new string is: %s\n", str);

    return 0;
}
```
This code starts by defining the initial string and the string to be appended. The `strcat()` function is then used to append the second string onto the first one. Finally, it prints the resulting combined string.
