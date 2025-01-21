In C, you can achieve this by using string concatenation using the '+' operator. Here's how you can implement it:

```c
#include <stdio.h>

int main() {
    char s[] = "hello";
    char result[50]; // Buffer to hold the concatenated result

    // Concatenating the original string with another string literal
    strcpy(result, s);
    strcat(result, " there!");

    printf("%s\n", result);

    return 0;
}
```

In this code:
- We start by declaring a character array `s` and initialize it with the string "hello".
- We also declare a character array `result` of size 50 to hold the concatenated result. This is necessary because C strings are null-terminated, so we need extra space for the null terminator.
- The `strcpy()` function is used to copy the contents of `s` into `result`.
- Then we use the `strcat()` function to append the string " there!" to the end of `result`.
- Finally, we print the content of `result` using `printf()`.

Note that in C, character arrays are zero-terminated (like strings), so the null terminator is crucial for proper string handling.
