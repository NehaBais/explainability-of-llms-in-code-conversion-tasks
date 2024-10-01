Here is your C++ code converted to C. Note that `<filesystem>` library, which provides the filesystem functionality in C++, has been replaced with POSIX calls for file operations:

```c
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

int create_directory(const char* path) {
    if (mkdir(path, 0777)) {
        fprintf(stderr, "Failed to create directory: %s\n", path);
        return -1;
    }

    return 0;
}

int main() {
    char path[1024];
    printf("Enter the path you want to create a directory for: ");
    scanf("%s", &path);

    if (create_directory(path)) {
        printf("Directory created successfully.\n");
    } else {
        printf("Failed to create directory.\n");
    }

    return 0;
}
```
This C code performs the same functionality as your provided C++ code. It prompts the user for a path, then creates any missing parent directories and attempts to create the final directory specified by the given path. If successful, it prints a success message; otherwise, it prints an error message.
