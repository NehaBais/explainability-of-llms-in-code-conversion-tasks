 Sure, here is the equivalent code in C:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Create file "output.txt" in the current working directory
    FILE *file = fopen("output.txt", "w");
    if (file == NULL) {
        perror("Error creating output.txt");
        return EXIT_FAILURE;
    }
    fclose(file);

    // Create file "output.txt" in the filesystem root
    file = fopen("/output.txt", "w");
    if (file == NULL) {
        perror("Error creating /output.txt");
        return EXIT_FAILURE;
    }
    fclose(file);

    // Create directory "docs" in the current working directory
    if (mkdir("docs", 0777) != 0) {
        perror("Error creating docs directory");
        return EXIT_FAILURE;
    }

    // Create directory "docs" in the filesystem root
    if (mkdir("/docs", 0777) != 0) {
        perror("Error creating /docs directory");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
```

This C code creates an empty file called "output.txt" in both the current working directory and the filesystem root, as well as creating an empty directory called "docs" in both locations. The `fopen` function is used to create files, and the `mkdir` function is used to create directories. If either operation fails, the program will print an error message using `perror`.
