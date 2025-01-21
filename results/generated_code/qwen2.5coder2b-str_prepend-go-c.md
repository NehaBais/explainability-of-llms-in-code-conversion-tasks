Sure! Below is the equivalent C code that accomplishes the same task as your Go code:

```c
#include <stdio.h>

int main() {
    char world[] = "world!";
    char greeting[] = "Hello, ";
    
    // Prepend the string variable with another string literal
    strcat(greeting, world);
    
    printf("%s\n", greeting);
    return 0;
}
```

In this C code:
1. We declare two character arrays `world` and `greeting`.
2. We use `strcat` to concatenate the `greeting` array with the `world` array.
3. Finally, we print the concatenated string using `printf`.

When you run this program, it will output:


Hello, world!

