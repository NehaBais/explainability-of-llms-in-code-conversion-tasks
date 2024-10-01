In C, there are no built in string comparison functions for equality and case insensitive equality like Java so we will use the `strcmp()` function to achieve this. There is also a `stricmp()` function available on some platforms (like Windows) that performs case-insensitive comparisons, otherwise you can implement your own simple function or use `_stricmp()` from `<string.h>`.
Here's how the equivalent code in C would look like:
```c
#include <stdio.h>
#include <string.h>

void compare(char* A, char* B) {
    if (strcmp(A, B) == 0) // compares two strings and returns zero if they are equal
        printf("'%s' and '%s' are lexically equal.\n", A, B);
    else
        printf("'%s' and '%s' are not lexically equal.\n", A, B);

    if (stricmp(A, B) == 0) // stricmp is a case insensitive version of strcmp function
        printf("'%s' and '%s' are case-insensitive lexically equal.\n", A, B);
    else
        printf("'%s' and '%s' are not case-insensitive lexically equal.\n", A, B);

    if (strcmp(A,B) < 0 ) // if the return value is less than zero then string A comes first in lexicographical order
        printf("'%s' is lexically before '%s'.\n", A, B);
    else if (strcmp(A,B) > 0)  //if the return value is more than zero then string B comes first in lexicographical order
        printf("'%s' is lexically after '%s'.\n", A, B);
    else
       printf("'%s' and '%s' are equally lexical.\n",A ,B );
}
int main() {
    compare("Hello", "Hello");
    compare("5", "5.0");
    compare("java", "Java");
    compare("ĴÃVÁ", "ĴÃVÁ");
    compare("ĴÃVÁ", "ĵãvá");
}
```
In the C programming language, string comparisons are mostly case sensitive and numeric strings are treated as lexically compared. If you want to make a case insensitive comparison in C for numeric strings, you would have to implement your own function to convert each character to its ASCII value before comparing them.
