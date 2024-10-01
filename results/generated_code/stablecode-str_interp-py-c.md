The equivalent C code for the given Python code will look like this:

```c
#include <stdio.h>

int main() {
    char *extra = "little";
    char *format = "Mary had a %s lamb.";
    char new_str[100];

    snprintf(new_str, sizeof(new_str)), 
    sprintf(new_str, format, extra));

    printf("%s\n", new_str);

    return 0;
}
```
This C code does exactly the same thing as your Python code. It first defines a string and another variable with a defined value. Then it uses `snprintf` to replace the placeholder in the format string with the value of the variable (`extra`). Finally, it prints out the resulting string.
