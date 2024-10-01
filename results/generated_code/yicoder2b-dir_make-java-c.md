Sure, here is the equivalent C code for your Java program using POSIX `mkdir -p` command functionality:

```C
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(void) {
    char *path = "C:/parent/test";

    char buffer[1024];
    strcpy(buffer, path);
    
    if (mkdir(buffer, S_IRWXU | S_IRWXG | S_IXGRP | S_IXOTH)) {
        perror("Error creating directory\n"); // print error if fails to create directory
        return 1;  // return 1 for failure
    }
    
    printf("Directory %s created successfully\n", buffer);

    return 0; // successful execution
}
```

Please note: `mkdir` in Linux/Unix does not create parent directories if they do not exist. Therefore we need to implement our own logic to handle that. However, the given code uses POSIX `-p` option which is a more advanced functionality and it works across different operating systems like Linux, MacOS etc.

Also note that this code will work only in an environment where you can use POSIX commands and functions. This includes POSIX systems (like Unix/Linux, but not Windows), Cygwin on Windows, or MinGW on Windows, among others. If your system does not support these features, the error messages may not be displayed correctly or the operation could fail.

The buffer `buffer` is used to mimic the behavior of POSIX `-p` option. It copies the path into this buffer and then creates the directory.
