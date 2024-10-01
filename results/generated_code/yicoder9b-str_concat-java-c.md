Here is the equivalent C code for your Java program:

```C
#include <stdio.h>
#include <string.h>

int main() {
    char s[10] = "hello";
    printf("%s literal\n", s);
    char s2[20];
    strcpy(s2, s);  // copy the content of s to s2
    strcat(s2, " literal"); // concatenate another string into s2
    printf("%s\n", s2);
    return 0;
}
```
This C code does exactly the same operation as your Java program. It creates a character array `s` and stores the string value in it. Then it prints the concatenation of original variable with another string literal. The content is then stored in another array, `s2`, which we print at last to illustrate the operation.
In C programming language, `strcpy()` function copies one string into another and `strcat()` function appends (concatenates) one string to another.
