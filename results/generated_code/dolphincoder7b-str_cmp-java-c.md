Below is the converted C code for the given Java code:
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void compare(char *A, char *B) {
    if (strcmp(A, B) == 0)
        printf("'%s' and '%s' are lexically equal.\n", A, B);
    else
        printf("'%s' and '%s' are not lexically equal.\n", A, B);

    if (strcasecmp(A, B) == 0)
        printf("'%s' and '%s' are case-insensitive lexically equal.\n", A, B);
    else
        printf("'%s' and '%s' are not case-insensitive lexically equal.\n", A, B);

    if (strcmp(A, B) < 0)
        printf("'%s' is lexically before '%s'.\n", A, B);
    else if (strcmp(A, B) > 0)
        printf("'%s' is lexically after '%s'.\n", A, B);

    if (strcmp(A, B) >= 0)
        printf("'%s' is not lexically before '%s'.\n", A, B);
    if (strcmp(A, B) <= 0)
        printf("'%s' is not lexically after '%s'.\n", A, B);

    printf("The lexical relationship is: %d\n", strcmp(A, B));
    printf("The case-insensitive lexical relationship is: %d\n\n", strcasecmp(A, B));
}

int main() {
    compare("Hello", "Hello");
    compare("5", "5.0");
    compare("java", "Java");
    compare("ĴÃVÁ", "ĴÃVÁ");
    compare("ĴÃVÁ", "ĵãvá");
    
    return 0;
}
```
