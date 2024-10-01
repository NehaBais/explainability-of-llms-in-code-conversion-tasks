The following code is the equivalent of the Python code in C language:

```c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void compare(char *a, char *B) {
    printf("\n%s is of type %s and %s is of type %s\n", A, "char*", B, "char*");

    if (strcmp(A, B) < 0) { printf("%s is strictly less than  %s\n", A, B); }
    if (strcmp(A, B) <= 0) { printf("%s is less than or equal to %s\n", A, B); }
    if (strcmp(A, B) > 0) { printf("%s is strictly greater than  %s\n", A, B); }
    if (strcmp(A, B) >= 0) { printf("%s is greater than or equal to %s\n", A, B); }

    if (strcmp(A, B) == 0) { printf("%s is equal to %s\n", A, B); }
    else                    { printf("%s is not equal to %s\n", A, B); }

    int result = strcmp(A, B);

    if (result == 0 && !strcmp(A, B)) { printf("%s has object identity with %s\n", A, B); }
    else                    { printf("%s has negated object identity with %s\n", A, B); }
}

int main() {
    compare("YUP", "YUP");
    compare("BALL", "BELL");
    compare("24", "123");
    compare("5.0", "5");

    return 0;
}
```

This code will compare two string-like variables A and B in lexicographical order, regardless of whether they are strings or integers. If they are strings, it compares them character by character until a difference is found, or the end of one string is reached, whichever comes first. The result is then used as follows:
* < 0 if the first character that does not match has a lower value in ASCII than in the second string.
* > 0 if it has a higher value in ASCII than in the second string.
* = 0 if all characters have the same value in both strings, including length and order.

In C, the type of each variable can be determined by its context, so the type of `A` is not explicitly declared like in Python. However, we know that `A` and `B` are string-like variables because they are compared with each other using the `strcmp()` function, which is specifically for comparing strings.
