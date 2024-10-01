 The Rust code you provided already does the task in a relatively idiomatic way, which is to use methods of the `String` type in order to manipulate string data. Here's the equivalent C code:

```c
#include <stdio.h>
#define SIZE 100

int main() {
    char hello[SIZE] = "Hello world";
    printf("%s", hello); // Prints "Hello world"
    
    strcat(hello, "!!!!");
    printf("\n%s", hello); // Prints "Hello world!!!"
    
    return 0;
}
```
This C code does exactly the same thing as your Rust code. It declares a string and prints it, then appends three exclamation marks to the string and prints the result again. The `strcat()` function is used here because C doesn't have an equivalent to Rust's `push_str()`.
