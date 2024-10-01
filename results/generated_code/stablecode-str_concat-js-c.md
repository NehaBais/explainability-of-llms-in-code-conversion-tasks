In C, you can't directly print variables as in JavaScript, because the console input/output model in C doesn't support it like JavaScript does with `console.log()`. 

However, you can use `printf` function from `stdio.h` to print the variables. This also supports string concatenation using `+` operator.

Here is the equivalent code:

```c
#include <stdio.h>

int main() {
    char s[20] = "hello";

    printf("%s", s); // Prints the value of variable s

    char another_string[] = " there!";

    // Concatenate two strings.
    strcat(s, another_string);

    printf("Final String: %s\n", s);

    return 0;
}
```

This C code creates a character array variable equal to any text value. Then it creates another character array variable whose value is the original variable concatenated with another string literal using `strcat()` function from `string.h`. It then prints the content of the variables using `printf()` function.
