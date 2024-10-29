In C, we use the `sprintf` function to add a string literal to an existing one without reallocating memory and changing original string. Here's how you can do it:

```c
#include <stdio.h>

int main(){
    char hello[50] = "Hello world";
    
    strcat(hello, "!!!!");
    
    printf("%s\n", hello);

    return 0;
}
```
This program creates a string variable `hello` and appends the string literal `"!!!" to it. It then prints out the contents of the modified string. Be aware that in C, strings are null-terminated arrays of characters so we should reserve one more space for the final null character at the end of the array when declaring a string variable.

