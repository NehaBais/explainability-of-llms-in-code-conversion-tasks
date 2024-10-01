Here is the equivalent C code:

```c
#include <stdio.h>
#include <string.h>

int main() {

    char s[100] = "hello";
    printf("%s\n", s);

    char s1[100];
    strcpy(s1, s);
    strcat(s1, " world");
    printf("%s\n", s1);
}
```

Here are a few things to note: 

- The string concatenation operator in Rust (" + )) is equivalent to the `strcat` function in C.

- In C, we need to allocate memory dynamically for variables that will hold strings. This is done using the `char s[100] = "hello";` syntax (where 100 is the maximum possible length of the string). 

In contrast, the Rust code can handle dynamic resizing of strings by storing them on the heap (`String::new` vs `String::from`) and using the `push_str` method to concatenate strings (equivalent to `strcat`)).

- C does not have built in type safety for string manipulation as it is done in Rust. Therefore, proper error handling should be added when working with strings in C.

- The `char s[100] = "hello";` syntax creates a mutable character array (`s[]`) that is initialized with the string literal `"hello"`. This means that the entire string literal will be copied into the character array upon initialization. If the length of the string literal exceeds the size of the character array, this will result in undefined behavior.

Therefore, it is recommended to avoid using large string literals directly assigned to mutable character arrays in C. Instead, consider creating a `char*` variable and dynamically allocating memory for the string using functions like `malloc()` or by using memory allocation operators (`new`, `delete`) in Rust).
