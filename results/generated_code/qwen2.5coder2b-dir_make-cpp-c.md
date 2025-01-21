Below is the equivalent C code for the given C++ code, using only the POSIX standard library.

```c
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main(int argc, char* argv[])
{
    if(argc != 2)
    {
        fprintf(stderr, "usage: mkdir <path>\n");
        return -1;
    }

    struct stat st;
    const char *pathToCreate = argv[1];

    // Check if the path already exists
    if (stat(pathToCreate, &st) == 0)
    {
        return 0;
    }
    
    // If it doesn't exist, create it recursively
    if (mkdir(pathToCreate, S_IRWXU | S_IXGRP | S_IUSER) == -1)
    {
        perror("couldn't create directory");
        return -1;
    }

    return 0;
}
```

The `stat` function checks if a path exists and returns its status in a `struct stat`. The `mkdir` function creates the specified directory. If it fails, an error is printed to the standard error stream using `perror`.
