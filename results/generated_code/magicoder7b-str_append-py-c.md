 Below is the equivalent C code for the given Python code. In C, we can't directly append strings to a variable like in python, instead, we need to use sprintf or strcat functions of string library. Here I am using sprintf function:

```c
#include <stdio.h>
#define SIZE 100

int main() {
    char str[SIZE] = "12345678";
    int n;
    
    // Add string literal to the end of the variable
    sprintf(str + strlen(str), "%s", "9!");

    printf("%s\n", str); // Print the contents of the variable after append operation.

    return 0;
}
```

In this code, `str` is declared as an array of characters with a defined size (100 in this case). We are using `strlen(str)` to calculate how many characters are already inside `str`, and then `sprintf()` function is used to add the new string "9!" to the end of it. Lastly, we print the contents of the modified `str`.
