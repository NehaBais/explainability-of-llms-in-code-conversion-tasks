To convert the Python code to C, we will need to include the C library functions for string manipulation and memory handling. Here is a translation of the provided Python code:

```c
#include <stdio.h>
#include <string.h>
#include <assert.h>
int main() {
    char s[] = "abcdefgh";
    int n, m;
    char char = 'd';
    char chars[] = "cd";
    
    // starting from n=2 characters in and m=3 in length
    printf("%.*s\n", m, &s[n-1]);
    
    // starting from n characters in, up to the end of the string
    if (strlen(&s[n]) > 0) {
        printf("%s\n", &s[n-1]);
    } else {
        printf("empty string\n");
    }
    
    // whole string minus last character
    printf("%.*s\n", (int) strlen(s)-1, s);
    
    // starting from a known character char="d" within the string and of m length
    int indx = strchr(s, 'd') - s;
    if (strlen(&s[indx]) > 0 && strlen(&s[indx+m-1]) > 0) {
        printf("%.*s\n", m, &s[indx]);
    } else {
        printf("invalid substring selection\n");
    }
    
    // starting from a known substring chars="cd" within the string and of m length
    indx = strstr(s, "cd") - s;
    if (strlen(&s[indx]) > 0 && strlen(&s[indx+m-1]) > 0) {
        printf("%.*s\n", m, &s[indx]);
    } else {
        printf("invalid substring selection\n");
    }
    
    return 0;
}
```

Note that we cannot directly copy and paste the Python code into C because the string manipulation functions like strchr(), strstr(), and slicing require different syntax in C. We need to make minor adjustments to the provided Python code for it to work correctly in C. For example, in C, you can use the sizeof operator to get the size of a string, but in Python you cannot directly apply that on a string variable. Therefore, we have to manually calculate the length of the string using strlen() or strnlen().
