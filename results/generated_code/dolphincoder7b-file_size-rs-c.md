The Rust code is already in a form that can be directly used in C. The only thing we need to convert is the use of unwrap_or_else, but this function is not available in C++. However, we can replace it with a conditional expression (if/else) to provide equivalent functionality. Here is the converted C code:
```c
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Error: No file name supplied\n");
        return 1;
    }

    struct stat st = {};
    int status = stat(argv[1], &st);
    
    if (status == -1) {
        perror("stat");
        exit(EXIT_FAILURE);
    }

    printf("Size of %s is %ld bytes\n", argv[1], (long)st.st_size);

    return 0;
}
```
In this C code, the stat() function is used to obtain information about a file or a directory. If successful, it returns a status value of 0, and the size in bytes is stored in the st_size field of the struct stat. If an error occurs, perror() is called to display the corresponding error message.
