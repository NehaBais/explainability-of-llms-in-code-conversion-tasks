The following code is written in C to perform the same functions as the provided Python code:
```
#include <stdio.h>

int main() {
    char s[] = "abcdefgh";
    int n, m;
    char char;
    char *chars;

    // starting from n=2 characters in and m=3 in length;
    printf("%s\n", s + (n - 1) + (n + m - 1));

    // starting from n characters in, up to the end of the string;
    printf("%s\n", s + (n - 1));

    // whole string minus last character;
    printf("%s\n", s);

    // starting from a known character char="d" within the string and of m length;
    int indx = strstr(s, "d");
    if (indx != -1) {
        printf("%s\n", s + indx);
    } else {
        printf("Character not found.\n");
    }

    // starting from a known substring chars="cd" within the string and of m length. 
    int indx = strstr(s, "cd");
    if (indx != -1) {
        printf("%s\n", s + indx);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}
```
The C code uses the `strstr()` function to find the index of a character or substring within a string. If the substring is found, it returns the index where the substring begins. If the substring is not found, it returns -1. The C code then prints the relevant substring using the `%s` format specifier and the `printf()` function.

Note that in the Python code, the `index()` method is used to find the index of a character or substring within a string. This method raises an exception if the substring is not found, whereas the C code uses the `strstr()` function which returns -1 if the substring is not found. Therefore, the Python code would need to include appropriate error handling for when the substring is not found, while the C code does not require any additional error handling.
