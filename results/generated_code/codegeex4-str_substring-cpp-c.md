In C language, there is no built-in function to handle string operations the way C++ does. We need to manually implement those functions if we want them in C language.

Here's how you can achieve the same functionality using standard C library functions:

```c
#include <stdio.h>
#include <string.h>

char* substring(char *str, int start, int length){
    static char substr[100];
    strncpy(substr, str + start, length);
    substr[length] = '\0';
    return substr;
}

int main() {
    char s[] = "0123456789";

    int const n = 3;
    int const m = 4;
    char c = '2';
    char sub[] = "456";

    printf("%s\n", substring(s, n, m));
    printf("%s\n", substring(s, n, strlen(s) - n + 1));
    printf("%s\n", substring(s, 0, strlen(s)-1));
    
    char *p = strchr(s, c);
    if (p != NULL){
        printf("%s\n", substring(p, 0, m));
    }

    p = strstr(s, sub);
    if (p != NULL){
        printf("%s\n", substring(p, 0, m));
    }
    
    return 0;
}
```

In this code:

- `substring()` is a function that takes in a string and creates a substring from it.
- `strchr()` is used to find the first occurrence of a character in a string.
- `strstr()` is used to find the first occurrence of a substring in a string. 

Please note, C standard library does not directly support Unicode or any specific encodings like UTF-8 or UTF-16, it only works with 0-terminated byte sequences (char arrays). You would have to implement encoding-specific functions if you need to handle those.

Also, this program doesn't check for out-of-bounds conditions which might result in undefined behavior. In a production environment, it's always safer and more appropriate to include these checks when manipulating strings.
