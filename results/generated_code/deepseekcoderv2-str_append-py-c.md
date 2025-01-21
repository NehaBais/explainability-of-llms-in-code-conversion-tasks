 Certainly! Below is the equivalent code in C that performs the same operations as your Python script:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Create a string variable and initialize it with a text value
    char str[] = "12345678";
    
    // Append another string literal to the existing string
    strcat(str, "9!");
    
    // Show the contents of the variable after the append operation
    printf("%s\n", str);
    
    return 0;
}
```

In this C code:
1. We declare a character array `str` and initialize it with the string `"12345678"`.
2. We use the `strcat` function to append the string `"9!"` to the existing string in `str`.
3. Finally, we print the contents of `str` using `printf`.
