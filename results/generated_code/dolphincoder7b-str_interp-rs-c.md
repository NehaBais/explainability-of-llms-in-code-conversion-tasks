To convert the Rust code to C, we will need to handle string formatting using `printf` and `snprintf` functions. Here is how the modified C code would look like:

```c
#include <stdio.h>

int main() 
{
    printf("Mary had a %s lamb\n", "little");
    // You can specify order
    printf("%s had a %s lamb\n", "little", "Mary");
    // Or named arguments if you prefer
    printf("%s had a %s lamb\n", "name", "adj");
}
```

Note that C does not have the ability to directly replace placeholders with values. This is something that Rust provides, but it's not available in C. In C we need to explicitly provide the string to be printed along with the format string. The format string can contain `%s` or similar placeholders which would indicate where we want to insert values into the final string. 

Please note: Since Rust does not have dynamic memory allocation, you cannot allocate any memory dynamically in this code snippet using `malloc`, `calloc`, etc., and it also doesn't support garbage collection, making it impossible to properly free allocated memory. So, please keep in mind that these are limitations of C which might be avoided in Rust.

Also, Rust does not have equivalents for all the `printf` functions like `printf_unlocked`. To use those functions you will need to wrap your code with `#define _GNU_SOURCE` before including `stdio.h` or define `_XOPEN_SOURCE` before including `unistd.h`. 

Here is how we can convert a Rust string literal to C string:

#include <string.h>
int main() 
{
    char c[] = "Mary had a  little lamb";
    printf("%s\n", c); // prints Mary had a  little lamb
}
