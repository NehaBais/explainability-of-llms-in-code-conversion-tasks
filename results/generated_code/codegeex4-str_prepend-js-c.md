C doesn't support string concatenation in the same way as JavaScript. In C, you would typically use a series of `strcat()` function calls or manually copy the strings into a new character array. However, for simplicity, we can create a new function to accomplish this task.

Here's the equivalent code in C:

```c
#include <stdio.h>
#include <string.h>

void prepend_string(char* original_str, const char* str_to_prepend) {
    int len1 = strlen(original_str);
    int len2 = strlen(str_to_prepend);

    // Allocate new memory for the string with space for both strings
    char* new_str = (char*)malloc((len1 + len2 + 1) * sizeof(char));

    // Copy str_to_prepend to the new string
    strcpy(new_str, str_to_prepend);
    // Concatenate original_str to the new string
    strcat(new_str, original_str);

    printf("%s\n", new_str);  // Print out the new string

    // Free the allocated memory
    free(new_str);
}

int main() {
    char s[] = ", World";
    prepend_string("Hello", s);

    return 0;
}
```

This code defines a `prepend_string` function that takes two strings: one to be prepended and one original string. It creates a new character array large enough to hold both the prepending string and the original string, then concatenates them together with `strcat`. The result is printed out, and finally, the allocated memory is freed.

In this main function, we declare a string `s` equal to ", World" and pass "Hello" and `s` to the prepend_string function.
