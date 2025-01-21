Sure, here is how you can convert the given Python code into C. Note that in C, strings are arrays of characters and you must manually handle memory allocation for string operations.

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str = (char *)malloc(9 * sizeof(char)); // Allocate enough space to hold "12345678"
    strcpy(str, "12345678"); // Copy the string into str

    char *appendStr = "!"; // The string to append
    int newLength = strlen(str) + strlen(appendStr); // Calculate the new length of str after appending

    // Allocate more space for the appended string
    char *temp = (char *)realloc(str, (newLength + 1) * sizeof(char));
    if (temp == NULL) {
        free(str);
        fprintf(stderr, "Memory reallocation failed\n");
        return 1;
    }
    str = temp;

    strcat(str, appendStr); // Append the string to str

    printf("%s\n", str); // Print the final string after appending
    free(str); // Free the allocated memory

    return 0;
}
```

### Explanation:

1. **Memory Allocation**: We start by allocating enough space for the initial string "12345678". The `malloc` function allocates this memory.
  
2. **String Copying**: The `strcpy` function is used to copy the initial string into the allocated memory.

3. **Appending Strings**:
   - First, we calculate the new length of the combined strings using `strlen`.
   - We then allocate more space for the combined string using `realloc`. If reallocation fails, we free the previously allocated memory and print an error message.
   - The `strcat` function appends the additional string to the original string.

4. **Printing**: Finally, we print the concatenated string using `printf`.

5. **Memory Cleanup**: It is important to free the dynamically allocated memory with `free` when it is no longer needed.

This code handles dynamic memory allocation and ensures that the strings are correctly appended and printed in C.
