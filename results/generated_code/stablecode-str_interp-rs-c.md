Here is the equivalent C code for your given Rust code. Note that as of C20, standard string interpolation via `#` is provided (and this solution uses that feature).

```c
#include <stdio.h>

int main() 
{
    printf("Mary had a %s lamb\n", "little");

    printf("%s had a %s lamb\n", "Mary", "little");

    return 0;
}
```