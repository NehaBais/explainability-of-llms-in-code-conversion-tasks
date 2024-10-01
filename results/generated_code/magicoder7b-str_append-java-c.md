 In C, the most idiomatic way to append strings would be through the use of `sprintf` or `strncat` functions:

Here's how you can do it with sprintf:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char string[50]; // Assume we know the maximum size of the string 
                     // (otherwise use dynamic memory allocation)
    strcpy(string, "abc"); // Copy initial string to our variable
    printf("%s\n", string); // Print out the contents of the variable

    sprintf(&string[3], "def"); // Append string literal to the end of our variable. 
                                // Note that it is assumed here that the original string "abc" is at least 3 characters long, and there's room for an additional 3-character string afterwards ("abcd").
    printf("%s\n", string); // Print out the contents of the variable after append operation
    return 0;
}
```

Note that:
1. This program assumes a fixed buffer size (50) to store our string, which might not be ideal for very long strings or when you don't know how much space your final string will take up.
2. We have to manually calculate the offset of where in the array we want to append our string (in this case it is 3 characters into the original string).

For dynamic memory allocation, please refer to the following code:

#include <stdio.h>
#include <stdlib.h> // Include necessary header file for malloc function
#include <string.h>

int main() {
    char *string; // Use a pointer instead of an array, so we can dynamically allocate memory 
                  // (note that this would need to be freed at the end)
    asprintf(&string, "%s", "abc"); // Allocate and copy initial string to our variable
    printf("%s\n", string); // Print out the contents of the variable

    asprintf(&string, "%s%s", string, "def"); // Append string literal to end of our variable
    printf("%s\n", string); // Print out the contents of the variable after append operation 
    
    free(string); // Don't forget to deallocate memory when you're done!
    return 0;
}

In this version, we are using `asprintf` which is similar to `sprintf`, but it automatically allocates memory for the resulting string and returns a pointer to it. This can be more convenient than manually managing memory with `malloc`. Note that when you're done with the string, you must free the allocated memory with `free()`.
