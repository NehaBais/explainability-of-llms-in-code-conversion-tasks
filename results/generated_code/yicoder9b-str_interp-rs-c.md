Here is the equivalent C code for the given Rust program. This uses printf function to achieve string interpolation: 

```c
#include <stdio.h>

int main() {
    printf("Mary had a little lamb\n");
    printf("Mary had a %s lamb\n", "little");
    return 0;
}
```
Please note that C language doesn't support named arguments or specific order like Rust. You have to provide the variables in the right order when using `%s` for string and other format specifiers for different data types. Also, there is no equivalent of `println!()` macro in standard C, so we use `printf()` instead.
