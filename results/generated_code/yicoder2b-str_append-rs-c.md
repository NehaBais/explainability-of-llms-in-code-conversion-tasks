Here is the equivalent C code for your Rust program:

```C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char *hello = "Hello world";
    char *append_text = "!!!!";
    printf("%s%s\n", hello, append_text);
}
```

This C code is similar to the Rust program you provided. It uses string concatenation (`strcat` function in C) to append `append_text` to `hello`. Note that C does not have a built-in type for `String` like Rust, so we use `char*` to represent the string data and `stdio.h` for reading and writing the standard input/output.

This code will show "Hello world!!!!" when run.
