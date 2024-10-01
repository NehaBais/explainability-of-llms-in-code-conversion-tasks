Sure, here is how you can convert this Python code into C:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char extra[] = "little";
    char new_str[256];  /* assuming the maximum length of string */
    sprintf(new_str, "Mary had a %s lamb.", extra);  /* sprintf function to print formatted strings */
    printf("%s\n", new_str);
    return 0;
}
```
This C code does the same thing as your Python code - it takes the string, "Mary had a X lamb." and replaces X with "little" when calling sprintf to print the formatted string. The result will be "Mary had a little lamb.".
