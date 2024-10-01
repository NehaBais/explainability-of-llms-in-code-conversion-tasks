To convert this Python code to C, we first need to find the corresponding equivalents for the necessary libraries and commands in C. In our case, `os` and `with` are not part of standard C library, so we will use the system-specific file operations and functions instead of those provided by the library.

Here is the equivalent code in C:
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void create(const char* directory) {
    // Create an empty file called "output.txt" of size 0 bytes in the specified directory
    FILE* output = fopen(strcat(directory, "/output.txt"), "w");
    if (output != NULL) {
        fclose(output);
    }

    // Create a new empty directory called "docs" in the specified directory
    char command[512];
    snprintf(command, sizeof(command), "mkdir %s/docs", directory);
    system(command);
}
```
Note that `system()` function is used to create directories since it's not provided by standard C library and we need to use the system-specific function. Also, `strcat` is used instead of `os.path.join` because `strcat` is a string concatenation function, whereas `os.path.join` is only available in Python.

To make this code work correctly on different operating systems, we need to use the appropriate file operation functions for each system:
- Windows: `fopen`, `fclose`, and `system`.
- Linux: `_open`, `close`, and `fork()`.
- MacOS: `open`, `close`, and `fork()`.

To compile this code on a Unix-like operating system, you will need to add the appropriate file operation library (e.g., `-lrt` for Linux).
