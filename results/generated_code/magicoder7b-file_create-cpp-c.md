 Here is the equivalent C code for your given C++ code using `sys/stat.h` and `sys/types.h`. Please note that this code works only on Unix-like systems as there's no built-in way to create directories in pure C:

```c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>

int main() {
    int fd;

    // Create an empty file called "output.txt" in current directory 
    if ((fd = open("output.txt", O_RDWR | O_CREAT, 0644)) == -1) {
        printf("Error while creating the output file\n");
        return EXIT_FAILURE;
    } else {
        close(fd);
    }
    
    // Create an empty directory called "docs" in current directory
    if (mkdir("docs", 0755) == -1) {
        printf("Error while creating the docs directory\n");
        return EXIT_FAILURE;
    }

    // Create an empty file called "output.txt" in root directory 
    if ((fd = open("/output.txt", O_RDWR | O_CREAT, 0644)) == -1) {
        printf("Error while creating the output file in root\n");
        return EXIT_FAILURE;
    } else {
        close(fd);
    }
    
    // Create an empty directory called "docs" in filesystem root
    if (mkdir("/docs", 0755) == -1) {
        printf("Error while creating the docs directory in root\n");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
```
This C code does exactly what your original C++ code does: it creates an empty file called "output.txt" of size 0 bytes and an empty directory called "docs", once in the current working directory, and once in the filesystem root.
