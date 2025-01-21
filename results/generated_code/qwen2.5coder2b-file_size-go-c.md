To convert the provided Go code to C, you would need to use appropriate system calls and functions for file operations in C. Here's an example of how you might structure your C program:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Define a function to get the size of a file
    long getFileSize(const char *path) {
        struct stat st;
        if (stat(path, &st) == 0) {
            return st.st_size;
        } else {
            fprintf(stderr, "Error: Could not get file size\n");
            return -1;
        }
    }

    // Print the size of input.txt
    printf("Size of 'input.txt': %ld bytes\n", getFileSize("input.txt"));

    // Print the size of /input.txt (assuming it's in the root directory)
    printf("Size of '/input.txt': %ld bytes\n", getFileSize("/input.txt"));

    return 0;
}
```

In this code:
- We define a function `getFileSize` that takes a file path as input and returns its size.
- In the `main` function, we use `stat` to retrieve the size of "input.txt" and "/input.txt". If successful, it prints the size; otherwise, it prints an error message.

Please note that this code assumes that you have access to the file system where "input.txt" is located. This example only works in Unix-like systems (like Linux or macOS) due to the use of `stat`.
