The equivalent C code for this Python code is as follows:

```c
#include <stdio.h>

int main(){
    char extra[] = "big";
    char *new_str = (char *)malloc(strlen("Mary had a X lamb.") + 1);
    
    sprintf(new_str, "Mary had a %s lamb.", extra);

    printf("%s\n", new_str);
    free(new_str); // Always remember to free memory allocated dynamically.

    return 0;
}
```

Please note that C does not support string interpolation in the way Python does. The `sprintf` function is used instead of Python's f-string for this purpose, and dynamic memory allocation (`malloc`) is used to create a copy of the original string with the replaced value. After printing the result, memory allocated with `malloc` should be freed to avoid memory leaks.

Also note that in C, variable names are case-sensitive, so `'X'`, `'x'`, `'Xi'` and others are all considered different variables. Therefore we use `extra` to store the string "big" in this example.
