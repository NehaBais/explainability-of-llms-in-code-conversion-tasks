 In C, strings are represented as an array of characters, which makes this task a bit more complex than in Java. Here's a possible conversion:

```c
#include <stdio.h>
#define MAX_SIZE 256

int main() {
    char string[MAX_SIZE] = "def";
    snprintf(string, MAX_SIZE, "abc%s", string); //Prepend the string variable with another string literal
    printf("%s\n", string); //print the result
    return 0;
}
```

In this C code:
- We first define a character array `string` of maximum size 256 to store our string.
- Then we use the `snprintf()` function to prepend "abc" in front of `string`. Note that the `%s` is a placeholder for the `string` argument, which will be replaced by the contents of `string`.
- We then print out the final result using `printf()`.

Please note that in C, it's not possible to directly change the size of an array and keep its data. You have to create another array with a larger size or use dynamic memory allocation if you want to store more than one string.
