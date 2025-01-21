In C language, strings are represented as arrays of characters. So, if you want to prepend one string to another, you will need a buffer to store the result, and then use `strcat()` or `sprintf()` functions.

Here is how your Golang code would look in C:

```c
#include <stdio.h>
#include <string.h>

int main() {
    // Declare char arrays for strings
    char s[20]; 
    char prepend[] = "Hello, ";

    // Initialize the string
    strcpy(s, "world!");

    // Prepend the string
    strcat(prepend, s);

    printf("%s\n", prepend);  // Output: Hello, world!

    return 0;
}
```

Please note that `strcat()` will append to the existing string. If you need to insert a string at a certain position in C, you would have to manually move some characters around using something like `memmove()`, and then use `sprintf()` or `strncpy()` to insert your new data.

Also, remember that you need to make sure your buffer (`char s[20];`) is large enough to hold the maximum possible length of the combined strings.
