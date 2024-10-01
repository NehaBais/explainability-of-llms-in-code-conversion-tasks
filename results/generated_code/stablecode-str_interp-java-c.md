Below is the equivalent C code for the given Java code:

```c
#include <stdio.h>

int main() {
    char* adjective = "little";
    char* lyric = malloc(100 * sizeof(char)));
    snprintf(lyric, 100, "Mary had a %s lamb", adjective);

    printf("%s\n", lyric);

    free(lyric);

    return 0;
}
```
This C code does exactly the same as your Java code. It first allocates memory for two strings - `adjective` and `lyric`. Then it uses `snprintf` function to format and insert `adjective` into `lyric`. Finally, it prints out the value of `lyric` string and frees the allocated memory before program exits.
