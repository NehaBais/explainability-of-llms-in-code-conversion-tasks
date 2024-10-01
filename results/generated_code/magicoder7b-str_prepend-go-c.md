 In C language, you can't directly append or prepend strings. Instead, you have to use a workaround by using array of chars and its length. Here is the equivalent code in C:

```c
#include <stdio.h>
#define MAX_SIZE 256
char s[MAX_SIZE];

int main() {
    char string1[] = "world!";
    strncpy(s, "Hello, ", MAX_SIZE); // Prepend the constant string to `s`
    strncat(s, string1, MAX_SIZE - strlen(s)); // Append the second string to `s`

    printf("%s\n", s); // Print the result
    
    return 0;
}
```
This C code does essentially the same thing as your Golang code. It's copying ("prepend") the constant string "Hello, " and concatenating ("append") "world!" to `s` (which is a char array). The length of the resulting string won't exceed MAX_SIZE (256) characters for this example because we used strncpy(), which stops copying after it encounters null character.
