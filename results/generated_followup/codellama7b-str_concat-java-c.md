Error: The errors are due to the use of incorrect data types, lack of parentheses around function calls, and invalid syntax for string concatenation in C.
Fix: Replace "char" with "char *", add parentheses around function calls, and use the correct syntax for string concatenation (i.e., strcat(s2, "literal") instead of s + " literal").
Corrected code:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char *s = "hello";
    char s2[64];
    strcpy(s2, s);
    strcat(s2, "literal");
    printf("%s\n", s);
    printf("%s\n", s2);
    return 0;
}
```
