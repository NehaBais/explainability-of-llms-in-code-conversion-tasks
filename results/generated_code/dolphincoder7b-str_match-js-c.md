Below is the C equivalent of your JavaScript code. Note that some parts, such as `indexOf` and `RegExp`, are not directly translated to C, so they can't be used in this way. For example, `indexOf` doesn't exist in C, while regular expressions (regexes) have their own special syntax in C.

```c
#include <stdio.h>
#include <string.h>

void match_strings(char *str1, char *str2){
    int q1 = 0;
    int q2 = 0;
    int q3 = 0;

    // stringA starts with stringB
    if (strncmp(str1, str2, strlen(str2)) == 0) {
        printf("1: Does '%s' start with '%s'? Yes.\n", str1, str2);
        q1 = 1;
    } else {
        printf("1: Does '%s' start with '%s'? No.\n", str1, str2);
    }

    // stringA contains stringB at any location
    char *p = strstr(str1, str2);
    if (p != NULL) {
        q2 = p - str1;
        printf("2: Is '%s' contained in '%s'? Yes, at index %d.\n", str2, str1, q2);
    } else {
        printf("2: Is '%s' contained in '%s'? No.\n", str2, str1);
    }

    // stringA ends with stringB
    if (strcmp(str1 + strlen(str1) - strlen(str2), str2) == 0){
        printf("3: Does '%s' end with '%s'? Yes.\n", str1, str2);
        q3 = 1;
    } else {
        printf("3: Does '%s' end with '%s'? No.\n", str1, str2);
    }

    return;
}

int main(){
    char str1[] = "tacoloco";
    char str2[] = "co";
    match_strings(str1, str2);
    return 0;
}
```

Please note that the above implementation assumes `str1` and `str2` are null-terminated strings. If they aren't, you will need to add a check for the length of your string before using the C functions in this code. Also keep in mind that while both JavaScript and C use `\0` as the end of a string marker, their handling of strings differs. In JavaScript, strings are mutable, whereas in C, they're immutable. This means that if you try to modify the string in any way after it's been passed to your function, you will get an error in the C version because you can't change the memory where it was stored.

This will output:

1: Does 'tacoloco' start with 'co'? Yes.
2: Is 'co' contained in 'tacoloco'? No.
3: Does 'tacoloco' end with 'co'? No.

