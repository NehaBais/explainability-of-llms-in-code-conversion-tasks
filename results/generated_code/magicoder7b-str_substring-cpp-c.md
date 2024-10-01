 In C, there is no built-in string function that performs substring functionality as efficiently and directly as in C++. Therefore, we can't provide the exact C code for your requirements. But you may use strncpy() to get a substring from a certain index up to a length or use memcpy to copy specific number of characters from one string to another. 

Here is a simple example:
```c
#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "0123456789";
    
    int const n = 3;
    int const m = 4;
    char const c = '2';
    char sub[4] = "456";

    printf("%.*s\n", m, s + n);  // prints next characters upto m length starting from character at position n

    return 0;
}
```
