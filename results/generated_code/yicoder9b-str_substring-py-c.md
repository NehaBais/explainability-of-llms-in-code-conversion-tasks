Below is the equivalent C code for the given Python program which displays different substrings based on user-defined inputs and conditions. Note that this conversion doesn't maintain the Unicode handling capability of original Python script due to differences in how Python and C handle strings and character encodings, but it provides a rough approximation:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "abcdefgh";
    int n=2, m=3;
    char char_known[] = "d";
    char substring_known[] = "cd";
    
    printf("%s\n", &s[n-1]);              // starting from n characters in and of m length
    printf("%s\n", strchr(&s[n-1], '\0')); // starting from n characters in, up to the end of the string
                                          // (note that strchr returns a pointer to the next character after the one you've found)
    printf("%.*s\n", (int)strlen(s)-1, s);  // whole string minus last character 

    char *ptr_char = strchr(s, char_known[0]); // starting from a known character within the string and of m length
    if (ptr_char){
        printf("%.*s\n", m, ptr_char);
    }

    char *ptr_substring = strstr(s, substring_known);  //starting from a known substring within the string and of m length
    if (ptr_substring){
        printf("%.*s\n", m, ptr_substring);
    }

    return 0;
}
```
