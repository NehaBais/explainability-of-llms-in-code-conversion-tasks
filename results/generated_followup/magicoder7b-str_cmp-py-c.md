The error in the C code is due to passing integer literals '2' and '1' instead of char pointers to the compare function. 

The correct way to call the compare function would be: `compare((char*)"2", (char*)"1"); // Numeric string comparison`

Here, we are typecasting the integer literals '2' and '1' into char pointers before calling the compare function. 

The corrected C code is as follows:
```c
#include <ctype.h>
#include <stdio.h>
#include <string.h>

void compare(char *a, char *b) {
    printf("\"%s\" is of type %s and \"%s\" is of type %s\n", a, __FILE__, b, __LINE__);
    
    if (strcmp(a, b) < 0)
        printf("%s is strictly less than %s\n", a, b);
    if (strcmp(a, b) <= 0)
        printf("%s is less than or equal to %s\n", a, b);
    if (strcmp(a, b) > 0)
        printf("%s is strictly greater than %s\n", a, b);
    if (strcmp(a, b) >= 0)
        printf("%s is greater than or equal to %s\n", a, b);
    if (!strcmp(a, b))
        printf("%s is equal to %s\n", a, b);
    if (strcmp(a, b))
        printf("%s is not equal to %s\n", a, b);
        
    char *a_lower = strdup(a), *b_lower = strdup(b);
    
    for (char *ptr = a_lower; *ptr != '\0'; ++ptr) {
        *ptr = tolower(*ptr);
    }
    
    for (char *ptr = b_lower; *ptr != '\0'; ++ptr) {
        *ptr = tolower(*ptr);
    }
    
    if (!strcmp(a_lower, b_lower))
        printf("\"%s\" has negated object identity with \"%s\"\n", a, b);
        
    free(a_lower);
    free(b_lower);
}

int main() {
    compare((char*)"YUP", (char*)"YUP");
    compare((char*)"BALL", (char*)"BELL");
    compare((char*)"24", (char*)"123");
    compare((char*)"2", (char*)"1"); // Numeric string comparison
    
    return 0;
}
```

This corrected C code performs lexical comparisons on strings and numbers using the `strcmp` function for strings, which compares the strings lexicographically. For numeric strings, `strcmp` will work fine because it treats the digits as their ASCII values, and thus works in a "numeric" way. It also includes case insensitive comparison functionality by converting both strings to lowercase before comparing them. Note that this code uses `strdup` to create a copy of string since C doesn't allow function parameters to be modified.
