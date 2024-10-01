To convert this code from Rust to C, we will use the C standard library functions for file and directory management.
To perform the same operations in the filesystem root, you can use the `chroot` function from `<unistd.h>`.
Here is an example of how you can perform the same operations in C:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>

int main(void) {
    char *input_file = "input.txt";
    char *output_file = "output.txt";
    char *docs_dir = "docs";
    char *mydocs_dir = "mydocs";

    // Rename input.txt to output.txt here
    if (rename(input_file, output_file) != 0) {
        perror("File move error");
        exit(1);
    }

    // Rename docs directory to mydocs here
    if (rename(docs_dir, mydocs_dir) != 0) {
        perror("File move error");
        exit(1);
    }

    // Change the working directory to the root filesystem
    if (chroot("/") != 0) {
        perror("Chroot error");
        exit(1);
    }

    // Rename input.txt to output.txt in the root filesystem
    if (rename("/input.txt", "/output.txt") != 0) {
        perror("File move error");
        exit(1);
    }

    // Rename docs directory to mydocs in the root filesystem
    if (rename("/docs", "/mydocs") != 0) {
        perror("File move error");
        exit(1);
    }

    return 0;
}
```

This code uses the `rename` function from `<stdio.h>` to rename files and directories. The `perror` function is used to print an error message if the `rename` call fails, and the `exit` function is called with a non-zero exit status to indicate that an error occurred. This code uses the `chroot` function to change the working directory to the root filesystem, and then performs the same operations as before using absolute paths.
