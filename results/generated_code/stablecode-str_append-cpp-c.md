Here is your C code:

```c
#include <stdio.h>
#include <string.h>

int main(void) {
    char greeting[100] = "Hello";
    strcat(greeting, ", world!");
    printf("%s\n", greeting);
    return 0;
}
```
Please note: 

1. C does not have built-in string handling functions like `std::string` in C++. Therefore, we use the standard library function `strcat()` to concatenate strings.
   
2. In C, there is no native way of appending a string literal to an existing string variable. You can achieve this by using the `strcat()` function as mentioned above.

3. The `std::cout` in C++ behaves similarly to `printf()` in C, but with additional features like more formatted output options and object-oriented programming capabilities.

4. Unlike in C++, you cannot directly assign string literals or concatenate them using the '+' operator in C. Therefore, we use the `strcat()` function as mentioned above.

5. The `std::endl` in C++ behaves similarly to `\n` in C, but with additional features like flushing the output buffer and moving the cursor to the beginning of the line. In this particular case where you are simply printing a greeting message that ends with a newline character (`std::endl`), there is no need for these extra capabilities provided by `std::endl`.
