Sure, here is the equivalent code in C:

```c
#include <stdio.h>
#include <stdlib.h>

int create_directory(const char *path) {
    int status = mkdir(path, 0755);
    if (status == -1) {
        perror("mkdir");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

int main() {
    const char* path = "C:/parent/test";
    if(create_directory(path) == EXIT_SUCCESS)
        printf("path successfully created\n");
    else
        printf("Failed to create path\n");

    return 0;
}
```

This code uses the `mkdir` function from the C standard library. Note that this function behaves differently compared to Java's `File.mkdirs()`. The `mkdir` function in C does not create parent directories automatically like `mkdir -p` in shell commands or Java's `File.mkdirs()`.

To emulate the behavior of creating parent directories, you can split the path and manually check/create each directory:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int create_directory(const char *path) {
    char dir[256];
    const char* p = path;

    while (*p != '\0') {
        if (*p == '/' || *p == '\\') {
            strncpy(dir, path, p - path + 1);
            dir[p - path + 1] = '\0';
            
            if (mkdir(dir, 0755) == -1 && errno != EEXIST) {
                perror("mkdir");
                return EXIT_FAILURE;
            }
        }
        p++;
    }

    // Create the final directory
    if (mkdir(path, 0755) == -1 && errno != EEXIST) {
        perror("mkdir");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

int main() {
    const char* path = "C:/parent/test";
    if(create_directory(path) == EXIT_SUCCESS)
        printf("path successfully created\n");
    else
        printf("Failed to create path\n");

    return 0;
}

This code splits the input path by slashes and attempts to create each directory in sequence. If any part of the path already exists, it will not raise an error.
