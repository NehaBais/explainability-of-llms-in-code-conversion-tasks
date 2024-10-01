Sure, here is how you can convert this code from Java to C. 

```c
#include <stdio.h>

int main() {
    char adjective[] = "little";
    printf("Mary had a %s lamb\n", adjective);
    return 0;
}
```
In this version of the program, we're using the `printf` function in C to print out the string. The syntax for `printf` is `printf(format_string, argument1, argument2, etc)`. `%s` is a placeholder that gets replaced with the actual value when the string is printed.

For the variable `adjective`, we're passing it directly to the `printf` function, which automatically interprets it as a string and prints out its value (in this case "little") without any further manipulations. 

Remember to always include `stdio.h` in C, because it provides functions (`printf`) for handling input/output operations.
