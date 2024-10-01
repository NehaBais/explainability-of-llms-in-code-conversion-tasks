The given Rust code can be converted to C as follows:

In the first example, we're converting the `add` operator into the string concatenation by using the `+` operator in a similar way. In C, you cannot use the `+` operator for strings as it would perform arithmetic addition instead of string concatenation. Instead, we will use `strcat` function from `string.h`.

```c
#include <stdio.h>
#include <string.h>

int main(){
    char hello[] = "Hello world";
    strcat(hello, "!!!!");
    printf("%s", hello);
}
```
In the second example, we're using `push_str` equivalent in C to append a string literal to an existing string.

#include <stdio.h>
#include <string.h>

int main(){
    char hello[] = "Hello world";
    strcat(hello, "!!!!");
    printf("%s", hello);
}

Remember that in C, all strings are character arrays, and the length of a string is determined by counting the characters up to the first null character (`\0`). Also, unlike Rust, C does not have automatic memory management. If you're using strings with C, you need to manage memory manually like in the examples above.
