Here is the equivalent code in C:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "12345678";
    strcpy(s, "0" + s); // by concatenation
    printf("%s\n", s);
    return 0;
}
```

Please note that in C, there's no direct way to prepend a character to a string like in Python. This is why the code uses `strcpy()` function which copies the second argument into the first one.
