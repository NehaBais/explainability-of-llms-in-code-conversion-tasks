Sure, here is the equivalent code in C:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void createFileAndDirectory(char *path) {
    // Create an empty file
    FILE *file = fopen(path, "w");
    if (file == NULL) {
        perror("Error creating file");
        return;
    }
    fclose(file);
    
    // Create an empty directory
    if (mkdir(path, 0755) != 0) {
        perror("Error creating directory");
    }
}

int main() {
    char currentDirectory[1024];
    getcwd(currentDirectory, sizeof(currentDirectory));
    
    createFileAndDirectory(strcat(currentDirectory, "/output.txt"));
    createFileAndDirectory(strcat("/output.txt", "\0"));
    createFileAndDirectory(strcat(currentDirectory, "/docs"));
    createFileAndDirectory(strcat("/", "docs\0"));

    return 0;
}
```

This C code does the same thing as your Java code. It creates an empty file named `output.txt` and an empty directory named `docs` in both the current working directory and the filesystem root (`/`). The `getcwd()` function is used to get the current working directory, and `mkdir()` is used to create directories.
