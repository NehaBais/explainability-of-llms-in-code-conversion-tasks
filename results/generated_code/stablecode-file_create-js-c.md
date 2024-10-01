The task at hand is to create a new empty file called "output.txt" in the current working directory, and another one called "output.txt" in the root of the filesystem. Also, an empty directory called "docs" should be created in the same manner - both in the current working directory and once in the filesystem root.

Here is how you can implement it using C:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void createFile(const char *filePath) {
    FILE *file = fopen(filePath, "w"));

    if (file == NULL) {
        printf("Error: Could not create file at path %s\n", filePath);
        return;
    }

    fclose(file);
}

void createDir(const char *dirPath) {
    int result = mkdir(dirPath, 0700));

    if (result != 0) {
        printf("Error: Could not create directory at path %s\n", dirPath);
        return;
    }
}

int main() {
    createFile("output.txt");
    createFile("/output.txt");
    createDir("docs");

    return 0;
}
```
Please note that the C language does not have a built-in filesystem manipulation library like in JavaScript (fs module). Therefore, you need to use the standard C libraries for file I/O operations:

1. For creating and writing files, you can make use of the `stdio.h` library.
2. To manipulate directories, you will need to work directly with system calls using the `unistd.h` and `sys/stat.h` libraries.

Therefore, the provided C code makes use of these libraries to create a new empty file called "output.txt", another one called "output.txt" located at the root of the filesystem, and an empty directory called "docs".
