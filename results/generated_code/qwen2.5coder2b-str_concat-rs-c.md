In C, you can achieve this by using pointers and character arrays. However, since Rust uses ownership and borrowing semantics which are not directly translatable into C, we would need to use a different approach for memory management.

Here's how you could write the equivalent code in C:

```c
#include <stdio.h>
#include <string.h>

int main() {
    // Define a char array and copy the string "hello" into it
    char s[10];
    strcpy(s, "hello");

    // Print the original string
    printf("Original string: %s\n", s);

    // Concatenate the original string with " world"
    strcat(s, " world");

    // Print the new concatenated string
    printf("Concatenated string: %s\n", s);
    
    return 0;
}
```

This C program does essentially the same thing as the Rust code you provided. It first creates a `char` array and copies the string "hello" into it. Then, it prints the original string. Finally, it concatenates the original string with " world" using the `strcat` function and prints the new concatenated string.
