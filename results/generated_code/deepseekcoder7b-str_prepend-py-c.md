In C, strings are handled differently. They cannot be changed once they are created. Therefore, to prepend another string literal to an existing one, you would need more space than what is currently available. Below is the equivalent code in C:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "12345678";
    char prepend[9];  // allocate enough space for the prepended string plus null terminator
    
    strcpy(prepend, "0");  
    strcat(prepend, s);  // append old string to new one

    printf("%s\n", prepend);  

    return 0;
}
```
This C code creates a string variable `s` and then create another character array for the concatenated result. The string "0" is copied into `prepend[]`, and then the original string `s` is appended to it with `strcat()`. Finally, it prints out the prepended result using `printf()`.

