C++17 is required for this code to work properly as some functionalities like creating directories and files, getting parent path etc are only available in C++17. 

Here's the equivalent code in C:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    // Creating a new empty file called "output.txt" of size 0 bytes
    int outputFile = open("output.txt", O_CREAT | O_TRUNC, 0644);
    if (outputFile == -1) {
        perror("open");
        exit(EXIT_FAILURE);
    }

    // Closing the file descriptor for "output.txt"
    close(outputFile);


    // Creating a new empty directory called "docs"
    int mkdirResult = mkdir("docs", 0755);
    if (mkdirResult == -1) {
        perror("mkdir");
        exit(EXIT_FAILURE);
    }

    return 0;
}
```

This C code does the same as the given C++ code. It creates a new empty file called "output.txt" of size 0 bytes and an empty directory called "docs". This should be done twice: once in the current working directory and once in the filesystem root.

Please note that some parts of this C code are platform-specific, so it may not work on all platforms without modification.
