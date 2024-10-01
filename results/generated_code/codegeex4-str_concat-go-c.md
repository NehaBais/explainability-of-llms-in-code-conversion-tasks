In C language, we don't have built-in support for dynamic strings manipulation as in Golang. However, with the help of `strncat` function from stdlib, we can concatenate two strings. Here is how it would look like:

```c
#include <stdio.h>
#include <string.h>

int main() {
    // text assigned to a string variable
    char s[100] = "hello";

    // output string variable
    printf("%s\n", s);

    // this output requested by original task descrption, although
    // not really required by current wording of task description.
    printf("%s literal\n", s);

    // concatenate variable and literal, assign result to another string variable
    char s2[100];
    strcpy(s2, s);  // Copy the content of s into s2
    strncat(s2, " literal", sizeof(s2)-strlen(s2));  // Concatenate with new literal

    // output second string variable
    printf("%s\n", s2);

    return 0;
}
```

This code creates an array of characters `s` to hold the initial string. After that, it uses standard library functions `strcpy` and `strncat` for string manipulation. Please note that you need to ensure there is enough space in your destination buffer (in this case `s2`) to avoid buffer overflow or segmentation faults.
