Here is the equivalent C code:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s[20] = "hello";
    printf("%s%s\n", s, " literal");

    char s2[50];
    strcpy(s2, s);
    strcat(s2, " literal");
    printf("%s\n", s2));

   return 0;
}
```

In C, strings are represented as arrays of characters. The concatenation operation is performed using the `strcat` function from the string library.
