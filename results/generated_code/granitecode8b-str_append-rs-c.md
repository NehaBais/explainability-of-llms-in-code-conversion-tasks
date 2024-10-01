Here is the converted code from Rust to C:
```
#include 
int main() {
 char* hello = "Hello world";
 printf("%s%s", hello, "!!!!");
 return 0;
}
```
In this code, we create a string variable `hello` and assign it the value "Hello world". We then use the `printf` function to print the contents of `hello`, followed by another string literal "!!!!". The `%s` format specifier is used to print a string, and the `printf` function concatenates the two strings together.

