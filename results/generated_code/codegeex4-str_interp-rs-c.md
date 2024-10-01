The equivalent code in C would be:

```c
#include <stdio.h>

int main() {
    printf("Mary had a %s lamb\n", "little");

    // You can specify order
    printf("%s had a %s lamb\n", "Mary", "little");

    // Named arguments are not available in C, so you would have to use the positions as with the previous example.

    return 0;
}
```

Remember that unlike Rust, C doesn't support string interpolation directly. We need to pass each individual variable's value into the printf function using their respective positions or names if they were defined earlier.
