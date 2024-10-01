 Below is a simple C program that performs similar operations as your provided Java code:

```c
#include <stdio.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/stat.h>

bool checkFileExist(const char *filePath) {
    struct stat buffer;
    return (stat(filePath, &buffer) == 0);
}

int main() {
    // Check for file existence in the current working directory
    if(checkFileExist("input.txt")) {
        printf("The file input.txt exists in the current working directory.\n");
    } else {
        printf("The file input.txt does not exist in the current working directory.\n");
    }

    // Check for file existence in root directory
    if(checkFileExist("/input.txt")) {
        printf("The file /input.txt exists in the root directory.\n");
    } else {
        printf("The file /input.txt does not exist in the root directory.\n");
    }

    return 0;
}
```
Note: This code assumes that you are working on a Unix-like system, where paths start with "/" to indicate the filesystem root and relative paths like "docs/input.txt". The function checkFileExist() checks if a file exists by calling stat() system call which returns 0 upon successful completion. If any error occurs during the execution of the stat() system call, it does not return 0 but rather an appropriate -1 value. 

This C program requires to be compiled with a C compiler like GCC and then run on a Unix-like operating system to work correctly.
