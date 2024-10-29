The equivalent code in C would look like this:

```C
#include <stdio.h>
#include <string.h>

int main() {
    char greeting[] = "Hello";
    strcat(greeting, ", world!");
    printf("%s\n", greeting);
    return 0;
}
```
In C++ string operations are a bit complex compared to their counterparts in C. In the equivalent code, we first declare `char` array and then use `strcat()` function from `string.h` library to append another string to it. Finally, `printf()` is used for output, similar to how `std::cout` works in C++.

