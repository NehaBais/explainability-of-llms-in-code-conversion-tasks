 In C language, we don't have built-in function like "substring" in Java which takes two or three parameters. We should manually handle this using loops. Here is the equivalent code for the mentioned requirements:

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to get a substring from n characters in and of m length
void sub_str(char *str, int n, int m){
    if((n+m) <= strlen(str)) {
        for (int i = 0; i < m; i++) {
            printf("%c", str[i+n]);
        }
    } else {
        fprintf(stderr, "Invalid index");
    }
}
// Function to get a substring from n characters in up to the end of string
void sub_str1(char *str, int n){
    for (int i = n; i < strlen(str); i++) {
        printf("%c", str[i]);
    }
}
// Function to get whole string minus the last character
void sub_str2(char *str){
    for (int i = 0; i < strlen(str) - 1; i++) {
        printf("%c", str[i]);
    }
}
// Function to get a substring from known character within string and of m length
void sub_str3(char *str, char c, int m){
    if ((strchr(str, c) != NULL)) {
        for (int i = 0; strchr(str, c) - str + i < m; i++) {
            printf("%c", str[strchr(str, c) - str + i]);
        }
    } else {
        fprintf(stderr, "Character not found");
    }
}
// Function to get a substring from known substring within string and of m length
void sub_str4(char *str, char *sub, int m){
    if ((strstr(str, sub) != NULL)) {
        for (int i = 0; strstr(str, sub) - str + i < m; i++) {
            printf("%c", str[strstr(str, sub) - str + i]);
        }
    } else {
        fprintf(stderr, "Substring not found");
    }
}
```
You can use these functions by passing your string and the other parameters according to requirements.
Please note that, in C there is no direct equivalent of substring method available in Java for UTF-8 or UTF-16 strings as they can contain any valid Unicode character. So, this code will only work with ASCII characters. For UTF-8 or UTF-16 strings handling, we need to use libraries like iconv.
