C doesn't support string concatenation in the same way as Python. In C, you would typically use a combination of `strcat`, `strcpy` and dynamic memory allocation to achieve similar results. Here's how you could write your code in C:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *s1 = (char *) malloc(10);
    strcpy(s1, "hello");

    char *s2 = (char *) malloc(15);
    strcpy(s2, s1);
    strcat(s2, " world");
    printf("%s\n", s2);

    free(s1);
    free(s2);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    char *s1 = (char *) malloc(10);
    strcpy(s1, "hello");

    char *s2 = (char *) malloc(40); // max size of output
    sprintf(s2, "%s, %s, %s", s1, "world", "mom");
    printf("%s\n", s2);

    free(s1);
    free(s2);

    return 0;
}
```

Note:
- The `malloc` function is used for dynamic memory allocation.
- The `strcpy` function is used to copy the string from one variable to another.
- The `strcat` function concatenates two strings.
- The `sprintf` function is used to format a string and append it to an existing string. It's similar to Python's `join` method. 
- The `free` function is used to deallocate memory, which is equivalent to the garbage collection in python that automatically frees memory when no longer needed.

These two programs should produce output identical to your original Python code.
