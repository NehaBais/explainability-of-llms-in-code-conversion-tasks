Here's the equivalent C code for the given Java code snippet:
```c
#include 
int main() {
 char *string = "abc";
 printf("%s", string);
 strcat(string, "def");
 printf("%s", string);
 return 0;
}
```
In this C code, we first declare a string variable named `string` and initialize it with the value "abc". We then use the `printf` function to print the contents of the string variable.
To append the string variable with another string literal in the most idiomatic way, we use the `strcat` function from the `<string.h>` library. This function concatenates two strings and updates the original string variable.
Finally, we use the `printf` function again to print the contents of the string variable after the append operation. The output will be:
abc
abcdef
Note that in C, the `=` operator is used for assigning values to variables, not appending strings. To append strings in C, you need to use the `strcat` function or concatenate strings using other methods such as string concatenation with '+' operator.

