The above Java code can be converted into C as follows:
```C
#include <stdio.h>

int main() {
    char *string = "def";
    char *new_string = "abc" + string;

    printf("%s", new_string);

    return 0;
}
```
Explanation:

* In C, strings are represented as arrays of characters. Therefore, we need to use a pointer to point to the first character of the string. This is why we declare `char *string` and not just `char string`.
* We also need to use a pointer to store the new string that we want to create by concatenating "abc" with the existing string. Therefore, we declare `char *new_string`.
* To concatenate two strings in C, we can use the `strcat()` function. This function takes two arguments: the first is the destination buffer where the concatenated string will be stored, and the second is the source string that we want to append to the destination buffer. In our case, we want to append "abc" to "def", so we call `strcat(new_string, "abc")`.
* Finally, we print the new string using the `printf()` function.

Note: In C, it is important to use the correct syntax for pointers and strings. If you are not sure about the correct way to do something, it is always a good idea to consult the documentation or a tutorial on C programming.
