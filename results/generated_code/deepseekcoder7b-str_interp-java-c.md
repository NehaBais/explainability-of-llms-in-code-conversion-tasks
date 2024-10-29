Here is the equivalent C code for your Java snippet, using standard library functions:

```c
#include <stdio.h>
#define MAX_SIZE 100 // Define maximum size of string

int main() {
    char adjective[MAX_SIZE] = "little";
    char lyric[MAX_SIZE];
    
    sprintf(lyric, "Mary had a %s lamb", adjective);
    printf("%s\n", lyric); // Output: Mary had a little lamb

    return 0;
}
```
In this C code, we use `sprintf()` function to replace the specified format specifier ("%s") with variable "adjective" in given string. After that, using printf(), we print the resultant formatted string on console. Please note that the size of `lyric` needs to be large enough for concatenation to occur successfully, and hence a macro define called MAX_SIZE is defined which can accommodate larger strings.

