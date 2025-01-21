 Here's how you can convert the given Golang code to C:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "world!"; // Create a character array (string) initialized with "world!".
    char prepend[] = "Hello, "; // Define the string to be prepended.

    // Calculate the length needed for the new string including the null terminator.
    int len_prepend = strlen(prepend);
    int len_s = strlen(s);
    int total_len = len_prepend + len_s + 1; // +1 for the null terminator.

    // Create a new character array to hold the result after prepending.
    char result[total_len];

    // Copy the prepended string to the beginning of the result array.
    strcpy(result, prepend);

    // Append the original string to the result array.
    strcat(result, s);

    printf("%s\n", result); // Print the final concatenated string.

    return 0;
}
```

This C code does the following:
1. Initializes a character array `s` with "world!".
2. Defines a string literal `prepend` which is "Hello, ".
3. Calculates the total length needed for the new string including the null terminator.
4. Creates a new character array `result` to hold the final concatenated string.
5. Copies the `prepend` string to the beginning of `result`.
6. Appends the original `s` string to `result`.
7. Prints the final concatenated string using `printf`.
