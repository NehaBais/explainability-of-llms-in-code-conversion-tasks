Here is how you can convert this JavaScript code to C:

In C, we don't have variables in the way JavaScript does. We can simulate variable behavior by using a struct or an array as an example. Here, I will use an array for simplicity of the conversion.

```c
#include <stdio.h>

int main() {

    // Define the initial string value and declare it as an array of characters 
    char s1[] = "Hello";

    // Append the second string literal to the first string variable in the most idiomatic way
    strcat(s1, ", World!");

    // Print the contents of the variable after the append operation
    printf("%s\n", s1);

    return 0;
}
```

In C, strings are not treated as variables like in JavaScript. Therefore, you need to use the `strcat()` function which appends a string onto another string and then stores it back into that memory location. In this particular case, we're appending " , World!" to the initial value of the string variable. After performing the append operation, we are printing the resulting string to the console using `printf()`.
