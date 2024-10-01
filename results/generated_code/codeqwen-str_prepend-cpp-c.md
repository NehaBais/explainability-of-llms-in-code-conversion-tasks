The given code is already in C, but here it is converted to show that it works the same way:

```c
#include <stdio.h>
#include <string.h>

int main( ) {
    char MyStrings[2][100] = { "prepended to" , "my string" };
    char prepended[200];
    strcpy(prepended, MyStrings[0]);
    strcat(prepended, MyStrings[1]);

    printf("%s\n", prepended);

    return 0;
}
```

In C, we use `char` arrays for strings, and the `strcpy()` function to copy one string into another. Then, `strcat()` is used to concatenate (add) the second string onto the end of the first.
