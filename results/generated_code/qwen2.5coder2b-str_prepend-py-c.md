Sure, here is the equivalent code in C:

```c
#include <stdio.h>

int main() {
    char s[12];  // Assuming the length of the string is at least 9 (including the '0' and the terminating '\0')
    
    strcpy(s, "12345678");
    strcat(s, "0");  // by concatenation
    
    printf("%s\n", s);
    return 0;
}
```

This code initializes a character array `s` with enough space for 9 characters (including the '0' and the terminating '\0'). It then uses `strcpy()` to copy the string "12345678" into `s`, and then concatenates the string "0" to it. Finally, it prints the resulting string using `printf()`.
