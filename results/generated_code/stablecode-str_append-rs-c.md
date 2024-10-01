The equivalent C code:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char hello[20]; // adjust size to prevent buffer overflow
    strcpy(hello, "Hello world");
    strcat(hello, "!!!!");
    printf("%s\n", hello));
    return 0;
}
```

Please note that in the C version, we need to manually handle strings and their manipulation methods. This is usually done through libraries like `<string.h>` in C. Here, we used a character array (`char[]`) to store our string value. Then, we use functions like `strcpy`, `strcat`, etc., to manipulate the string contents. Finally, we print out the final string value using `printf` function.
