 Certainly! Below is the equivalent code in C that performs the same operations as your Go program:

```c
#include <stdio.h>
#include <string.h>

int main() {
    // text assigned to a string variable
    char s[] = "hello";

    // output string variable
    printf("%s\n", s);

    // create a buffer for the concatenated result
    char s2[100]; // assuming the maximum length of the final string will not exceed 99 characters

    // concatenate variable and literal, assign result to another string variable
    strcpy(s2, s); // Copy the original string to the new buffer
    strcat(s2, " literal"); // Concatenate the literal to the end of the new buffer

    // output second string variable
    printf("%s\n", s2);

    return 0;
}
```

In this C code:
- We declare a character array `s` and initialize it with the string "hello".
- We print the content of `s`.
- We create another character array `s2` to hold the concatenated result.
- We use `strcpy` to copy the contents of `s` into `s2`, and then `strcat` to append the literal " literal" to it.
- Finally, we print the content of `s2`.
