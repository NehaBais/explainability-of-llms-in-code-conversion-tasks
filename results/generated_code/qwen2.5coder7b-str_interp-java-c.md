Here is the equivalent code in C:

```c
#include <stdio.h>

int main() {
    char* adjective = "little";
    char lyric[50];
    sprintf(lyric, "Mary had a %s lamb", adjective);

    printf("%s\n", lyric); 

    return 0;
}
```

In this code, `sprintf` function is used for string interpolation. It takes a buffer (in this case an array of characters), a format string and additional arguments that are substituted into the format string where specified by %s. The result is stored in the buffer. Finally, `printf` is used to print out the interpolated string.
