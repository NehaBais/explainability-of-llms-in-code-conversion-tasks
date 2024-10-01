The equivalent code in C is:
```c
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    char *adjective = "little";
    char lyric[50] = "";
    
    sprintf(lyric, "Mary had a %s lamb", adjective);
    printf("%s\n", lyric);
    
    return 0;
}
```
Note: The C code uses the `sprintf` function to perform string interpolation. Also, unlike Java, in C, strings need to be allocated on the heap using `malloc`. In this case, we allocate a buffer of size 50 characters for our `lyric` string. If you need more space, you can adjust the length accordingly.
The `%s` format specifier is used to convert the `adjective` variable into a string representation and insert it in the place of `%s` in the format string (the second argument passed to `sprintf`). The result of this operation is stored in the `lyric` buffer. Finally, we use `printf` to output the final interpolated string.
In C, strings can be manipulated through pointers, so there's no need to deal with Java's String class directly. It's important to remember that in C, you need to manage memory manually (using `malloc`, `free` etc.), and you have to allocate memory for variables that hold strings.
