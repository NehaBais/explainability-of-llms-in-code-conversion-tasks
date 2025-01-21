To convert this Java code to C, you can use the standard library `fopen` function for checking if the files exist. Here is how you can do it:

```c
#include <stdio.h>

int main() {
    // Check for input.txt in current working directory
    if (access("docs/input.txt", F_OK) == 0) {
        printf("Input file 'docs/input.txt' exists.\n");
    } else {
        printf("Input file 'docs/input.txt' does not exist.\n");
    }

    // Check for input.txt in the root directory
    if (access("/docs/input.txt", F_OK) == 0) {
        printf("Input file '/docs/input.txt' exists.\n");
    } else {
        printf("Input file '/docs/input.txt' does not exist.\n");
    }

    return 0;
}
```

### Explanation:
1. **`access()` Function**:
   - `access()` function is used to check if a specified file or directory exists.
   - `F_OK` is the flag that checks for existence of a file.
   - The first argument is the path to the file or directory.

2. **Output**:
   - If the file exists, it prints "Input file 'docs/input.txt' exists." or "Input file '/docs/input.txt' exists."
   - If the file does not exist, it prints "Input file 'docs/input.txt' does not exist." or "Input file '/docs/input.txt' does not exist."

This code is equivalent to the Java provided.
