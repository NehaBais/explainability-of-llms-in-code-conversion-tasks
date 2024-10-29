The equivalent C code for your JavaScript snippet would be like this (since C does not have a direct counterpart to the `append` function, we will concatenate two strings):

```C
#include <stdio.h>
#include <string.h>

int main() {
    char s[50] = ", World";
    
    // Prepend "Hello" to string s. We have to shift the original content of s and then add our prefix
    strcpy(s + 5, s); 
    strcpy(s, "Hello");
    
    printf("%s\n", s);

    return 0;
}
```
In this code, we are creating a char array (or string in C) `s` with enough space to hold the entire text. We then copy ", World" into it, concatenate "Hello" before that using `strcpy()` function and print it out. Note that shift is done by 5 positions since length of "Hello" is 5 (including null character at the end).

