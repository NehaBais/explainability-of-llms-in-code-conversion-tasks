In C, you can use the `mkdir()` function to create a new directory and the `fopen()` function with "w" (write mode) to create or truncate an empty file. Note that you need to include necessary headers like `<stdio.h>` for input/output functions and `<dirent.h>` for creating directories.

Here is how you can convert your JavaScript code to C:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fct(const char* path) {
    if (mkdir(path, 0755) != 0 && errno != EEXIST) {
        perror("Error creating directory");
    }
}

int main() {
    const char *currentDirectory = "./";
    const char *rootDirectory = "/";

    // Creating empty file and directory in current working directory
    FILE* fpCurrentFile = fopen(strcat((char*)malloc(strlen(currentDirectory)+7), "output.txt"), "w");
    if (fpCurrentFile == NULL) {
        perror("Error opening file");
    } else {
        fclose(fpCurrentFile);
    }
    
    fct(strcat((char*)malloc(strlen(currentDirectory)+5), "docs"));

    // Creating empty file and directory in filesystem root
    FILE* fpRootFile = fopen(strcat((char*)malloc(strlen(rootDirectory)+8), "/output.txt"), "w");
    if (fpRootFile == NULL) {
        perror("Error opening file");
    } else {
        fclose(fpRootFile);
    }
    
    fct(strcat((char*)malloc(strlen(rootDirectory)+6), "/docs"));

    return 0;
}
```

Please note that this code needs to be run with appropriate permissions. Writing or creating directories in the root directory might require elevated privileges, depending on your system's security settings.

Also, the `strcat()` function concatenates two strings together and modifies the first string. It does not allocate memory for the new combined string, so you need to allocate enough memory before using it with `strcat()`. This code doesn't demonstrate how to handle dynamic memory allocation in C because that can be tricky and error-prone without careful management.

This is a simple conversion from JavaScript to C. Depending on your needs and system, you might need to add more complex checks and error handling to this code.
