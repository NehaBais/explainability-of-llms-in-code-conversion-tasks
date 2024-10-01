This is a Python code snippet and it can be converted to C as below:

```c
#include <stdio.h>
#include <string.h>

void compare(char *a, char *b){
    printf("\n%s is of type %s and %s is of type %s", a, __typeid_str(a), b, __typeid_str(b));
    if (strcmp(a, b) < 0) printf("%s is strictly less than  %s\n", a, b);
    else if (strcmp(a, b) == 0) printf("%s is less than or equal to %s\n", a, b);
    if (strcmp(a, b) > 0) printf("%s is strictly greater than  %s\n", a, b);
    else if (strcmp(a, b) == 0) printf("%s is greater than or equal to %s\n", a, b);
    if (strcmp(a, b) == 0) printf("%s is equal to %s\n", a, b);
    else printf("%s is not equal to %s\n", a, b);
    if (a==b) printf("%s has object identity with %s\n", a, b);
    else printf("%s has negated object identity with %s\n", a, b);
}
```
The C language does not provide direct ways to compare strings lexically or numerically. Therefore, the `strcmp` function is used which returns a negative value if the first string is smaller than the second string, 0 if they are equal and a positive value otherwise. The typeid operator (used in combination with __typeof_) in C language is similar to Python's `type()` function, but it does not exist directly in the C language.

