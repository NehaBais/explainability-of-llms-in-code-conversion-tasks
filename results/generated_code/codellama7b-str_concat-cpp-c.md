The code can be converted to C as follows:
```
#include <stdio.h>
#include <string.h>

int main() {
    char *s = "hello";
    printf("%s literal\n", s);
    char *s2 = (char*)malloc(strlen(s) + strlen(" literal") + 1);
    strcpy(s2, s);
    strcat(s2, " literal");
    printf("%s\n", s2);
    free(s2);
    return 0;
}
```
Explanation:

* The `std::string` type in C++ is not available in C. Instead, we use the `char *` pointer to store a string.
* To concatenate two strings, we use the `strcat()` function in C. It appends the second string to the first string and stores the result in the first string. We need to allocate memory for the resulting string using `malloc()`, since it is not possible to assign a value to a pointer without allocating memory for it.
* To print the concatenated string, we use the `printf()` function in C. It takes a format string as its first argument, which specifies how to print the arguments that follow. In this case, we use `%s` to print a string, and `\n` to print a newline character at the end of the line.
* To free the memory allocated for `s2`, we use the `free()` function in C. It takes a pointer as its argument, which is the address of the block of memory that needs to be freed.
Note: In this example, we use `strlen()` to calculate the length of the strings, but it's not necessary and can be optimized out if the compiler is able to determine the length of the string at compile time.
