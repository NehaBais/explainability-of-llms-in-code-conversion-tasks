 Below is the equivalent C code for your Golang program:

```c
#include <stdio.h>
#define MAX_SIZE 100

int main() {
   // text assigned to a string variable
    char s[MAX_SIZE] = "hello";
    
    // output string variable
    printf("%s\n", s);

    // concatenate variable and literal, assign result to another string variable
    char s2[MAX_SIZE];
    strcpy(s2, s);
    strcat(s2, " literal");
    
    // output second string variable
    printf("%s\n", s2);

    return 0;
}
```
Note: It's important to remember that in C, there is no built-in string concatenation function like `+` operator of Golang, thus we have to use `strcpy()` and `strcat()`. The size of array `s2` (MAX_SIZE) should be at least the sum of sizes of initial strings (here: size of `"hello"` + 1 (" ") + size of `" literal"`) for this code to work correctly.
