 In C, we don't have a built-in way to declare and initialize strings like in JavaScript. The closest equivalent is using `char*`. Here is your code converted into C:

```c
#include <stdio.h>
#define MAX_SIZE 256

int main() {
    char s1[MAX_SIZE] = "Hello";
    strncat(s1, ", World!", MAX_SIZE); // append string literal to s1
    printf("%s\n", s1); // print the contents of s1
    return 0;
}
```

In this C code:
- We first declare a `char` array named `s1` with a maximum size of `256`. This is similar to declaring a string in JavaScript.
- Then we use `strncat()` function (from string library `<string.h>`) which concatenates a source string to the end of the destination string, placing a terminating null character at the end of the new string. The maximum size of this operation is limited by the second argument `MAX_SIZE`.
- Finally, we use `printf()` function to print out the contents of variable `s1`.
