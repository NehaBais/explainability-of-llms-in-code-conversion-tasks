The code in C language is as follows. It uses the standard library functions strcmp, strncmp, and toupper. The string comparison function strcmp returns an integer that shows if strings are equal or not. If it's less than 0 then string1 goes before string2 and greater than 0 means string1 comes after string2.
```c
#include <stdio.<｜begin▁of▁sentence｜>
#include <string.h>
#include <ctype.h>

int main() {
    // Comparing two strings for exact equality
    printf("%d\n", strcmp("abcd", "abcd"));  // true, prints 0

    // Comparing two strings for inequality (i.e., the inverse of exact equality)
    printf("%d\n", strcmp("ABCD", "abcd"));  // false, not zero
    
    // Comparing two strings to see if one is lexically ordered before than the other
    printf("%d\n", strcmp("abcd", "dcba"));  // true, less than 0

    // Comparing two strings to see if one is lexically ordered after than the other
    printf("%d\n", strcmp("dcba", "abcd"));  // false, not less than zero

    char str1[] = "ABCD";
    char str2[] = "abcd";
    
    int len = strlen(str1);
    for (int i = 0; i < len; ++i) {
        str1[i] = toupper((unsigned char)str1[i]);
        str2[i] = toupper((unsigned char)str2[i]);
    }
    
    // Case insensitive comparison
    printf("%d\n", strcmp(str1, str2));  // true, prints zero

    return 0;
}
```
Here in C we also have the function 'strncmp' for string comparison that can be used when you need to compare only a part of strings. Also it doesn’t treat numeric strings as alphabets which differs from JavaScript. It treats them numerically if they contain numerical characters, so "123" is lexically smaller than "abc".

