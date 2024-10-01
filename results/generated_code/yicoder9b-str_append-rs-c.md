In C, strings are manipulated differently than in Rust. There isn't a direct equivalent of the `String::add()` method from Rust because it's not an operation that can be done on normal C strings. However, you can use the `strcat` function to concatenate strings and the `printf` function for printing.
Here is how you could convert your Rust code into C:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char hello[20] = "Hello world";
    strcat(hello, "!!!!");
    printf("%s\n", hello);
    return 0;
}
```
In this code:
- `#include <stdio.h>` and `#include <string.h>` are preprocessor commands that include the standard input/output library (`<stdio.h>`) and string operations library (`<string.h>`), respectively.
- The `strcat` function is from the string.h library which concatenates two strings: the first argument is the destination and the second one source.
- The `printf` function outputs a formatted string to the console. In this case it prints out the contents of the hello variable after the append operation.
