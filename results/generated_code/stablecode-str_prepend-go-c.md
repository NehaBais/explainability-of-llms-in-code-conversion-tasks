Here's your converted C code:

```c
#include <stdio.h>
#include <string.h> 

int main() {

    char s[100] = "world!";

    char hello[100] = "Hello, ";

    strcat(hello, s);

    printf("%s\n", hello);

    return 0;
}
```
This C code does exactly what your Golang code did. It concatenates the string `"Hello, "` with the existing string `"world!"` stored in variable `s`. The resulting string is then printed to the console.
