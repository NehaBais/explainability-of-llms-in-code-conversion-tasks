 In C, the code would look like this:

```c
#include <stdio.h>

int main() {
    char* s = "hello";
    printf("%s literal\n", s);
    char* s2 = malloc(strlen(s) + 9); // 9 is the length of " literal"
    strcpy(s2, s);
    strcat(s2, " literal");
    printf("%s\n", s2);
    free(s2);
    return 0;
}
```

In this C code, we first declare a string pointer `s` that points to the string literal `"hello"`. Then, we print out the content of `s`, followed by " literal".
Next, we allocate enough memory for another string `s2` and copy the contents of `s` into `s2`. After that, we append the string `" literal"` to `s2` using the `strcat()` function. Finally, we print out the content of `s2` and free the allocated memory.
