This is the equivalent C code for your given C++ code - 

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "0123456789";
    int n = 3, m = 4, i;
    char c = '2', sub[4] = "456";
    
    printf("%.*s\n", m, &s[n]);                      // Starting from n characters in and of m length
    printf("%s\n", &s[n]);                           // Starting from n characters in, up to the end of the string
    printf("%.*s\n", strlen(&s[0]) - 1, &s[0]);       // Whole string minus the last character
    for (i = 0; i < strlen(&s[0])-1; ++i) {
        if (&s[n+i] == &s[c])                          // Starting from a known character within the string and of m length
            printf("%.*s\n", m, &s[n+i]);
    }
    for (i = 0; i < strlen(&s[0])-1-strlen(sub); ++i) {
        if ((&s[n+i] == &s[sub]) ||                   // Starting from a known substring within the string and of m length
            (memcmp(&s[n+i], &s[n], strlen(sub))==0)) 
            printf("%.*s\n", m, &s[n+i]);
    }
    return 0;
}
```
Please note that C does not handle UTF-8 characters the same way as C++. UTF-8 encoding of a character can be between one to four bytes long in C, while in C++ it is either one or two bytes. Therefore, the conversion from C++ string handling to C only considers ASCII characters and does not perform all Unicode-handling features.
