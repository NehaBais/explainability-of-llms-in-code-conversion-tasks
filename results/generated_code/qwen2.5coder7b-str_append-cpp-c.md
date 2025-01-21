In C, there is no built-in string class like in C++. So, we need to use character arrays instead. Here's how the code can be converted:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char greeting[] = "Hello";
    
    // Appending the string literal " , world!" to the greeting variable
    strcat(greeting, " , world!");
    
    printf("%s\n", greeting);
    
    return 0;
}
```

In this code, `strcat` function is used to concatenate two strings. Note that we need enough space in the destination array (greeting) to hold both strings and a null terminator. If there's not enough space, it can cause buffer overflow.
