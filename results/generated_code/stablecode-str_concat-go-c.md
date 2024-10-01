Here is the equivalent C code:

```c
#include <stdio.h>
#include <string.h>

int main() {
    // text assigned to a string variable
    char s[20] = "hello";

    // output string variable
    printf("%s\n", s);

    // this output requested by original task descrption, although
    // not really required by current wording of task description.
    strcat(s, " literal"));

    // output the updated string variable
    printf("%s\n", s);

    return 0;
}
```
This C code does exactly what your original Go code is doing in its entirety. The main difference between this C code and your Go code is that we are using C language specific functions like `strcat` for concatenating two strings.
