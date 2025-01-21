Sure, here is the equivalent code in C using standard library functions:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Create an empty file called "output.txt" of size 0 bytes in the current working directory
    FILE *f = fopen("output.txt", "w");
    if (f == NULL) {
        perror("Failed to create 'output.txt'");
        return EXIT_FAILURE;
    }
    fclose(f);

    // Create an empty file called "output.txt" of size 0 bytes in the filesystem root
    f = fopen("/output.txt", "w");
    if (f == NULL) {
        perror("Failed to create '/output.txt'");
        return EXIT_FAILURE;
    }
    fclose(f);

    // Create an empty directory called "docs" in the current working directory
    if (mkdir("docs", 0755) != 0) {
        perror("Failed to create 'docs' directory");
        return EXIT_FAILURE;
    }

    // Create an empty directory called "docs" in the filesystem root
    if (mkdir("/docs", 0755) != 0) {
        perror("Failed to create '/docs' directory");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
```

This C code does the following:
1. Creates an empty file called "output.txt" in the current working directory.
2. Creates an empty file called "output.txt" in the filesystem root (note: you may need appropriate permissions to create files and directories in the root directory).
3. Creates an empty directory called "docs" in the current working directory.
4. Creates an empty directory called "docs" in the filesystem root (note: again, you may need appropriate permissions for this).

Make sure that your program has the necessary permissions to create files and directories in both the current working directory and the filesystem root.
