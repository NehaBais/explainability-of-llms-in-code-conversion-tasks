Sure! Here's how you can convert this code from JavaScript to C:
```c
#include <stdio.h>
 
int main() {
    char s[] = "hello";
    printf("%s there!\n", s);
    return 0;
}
```
In C, the `printf` function is used to print a string to the console. In this example, we create an array of characters called 's' and assign it the value "hello". Then, we use `printf` with the format specifier `%s` to output the concatenated string to the console. The `%s there!` part of the format specifier is used to print a literal string with the concatenated value of s.
The result of this code will be "hello there!".
