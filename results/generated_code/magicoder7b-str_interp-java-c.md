 The equivalent code in C would look like this:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char* adjective = "little";
    char lyric[50]; // assuming enough space for the longest expected output
    
    sprintf(lyric, "Mary had a %s lamb", adjective);

    printf("%s\n", lyric); 

    return 0;
}
```

This code does essentially the same thing as the Java version. It declares a string variable `adjective` and then uses the `sprintf` function to write into the `lyric` array, inserting the value of `adjective` at the `%s` placeholder in the format string. The resulting string is printed out with `printf`.
