In C, the equivalent code would look like this:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char string[20] = "abc";  // 20 is chosen as the buffer size to prevent overflow
    printf("%s\n", string);   

    strcat(string, "def");  
    printf("%s\n", string);

    return 0;
}
```
In this code:
- `#include <stdio.h>` is used to include the standard input/output library.
- `#include <string.h>` is used to include the string library which contains function like strcat().
- The `strcat()` function concatenates two strings, "abc" and "def" in this case. It attaches "def" after "abc" to form "abcdef".
