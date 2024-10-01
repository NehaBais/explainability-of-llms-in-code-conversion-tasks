In C language there is no direct equivalent to Java's `File` class, but we can use the standard library's functions to achieve what you want. Here is the equivalent code in C:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>


int checkFile(char *path) {
    struct stat st;
    if (stat(path, &st) == 0) {
        return 1;
    }
    return 0;
}


int main() {
    // for the current working directory
    char path1[1024];
    strcpy(path1, "docs/input.txt");
    if (checkFile(path1)) {
        printf("The file %s exists.\n", path1);
    } else {
        printf("The file %s does not exist.\n", path1);
    }

    // for a file and directory in the filesystem root
    char path2[1024];
    strcpy(path2, "/docs/input.txt");
    if (checkFile(path2))) {
        printf("The file %s exists.\n", path2);
    } else {
        printf("The file %s does not exist.\n", path2);
    }

    return 0;
}
```
In this code, we're using the `stat` function from the standard library to check if a file or directory exists at the specified path. We then print out whether the file or directory exists or not based on the return value of the `stat` function.
