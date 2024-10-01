Sure, here's how you can convert the given Rust code to C:
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *s = strdup("hello");
    
    // print the value of s
    printf("%s\n", s);

    char *s1;
    asprintf(&s1, "%s world", s);

    // print the value of s1
    printf("%s\n", s1);
    
    free(s);
    free(s1);
    return 0;
}
```
In this C code, we first declare two variables: `char *` pointers `s` and `s1`. We use `strdup()` function to copy the string literal "hello" into the `s` pointer. Then we concatenate it with another string literal using `%s world`, assigning the result to `s1`. Finally, we print the values of both strings `s` and `s1` using `printf()`. Note that in C, you need to free dynamically allocated memory when done using it. In this case, we use `free()` function to release the memory occupied by `s` and `s1`.
To run this code, save it as a file named "main.c" and compile it with a C compiler like GCC or clang:

gcc -o main main.c
./main
