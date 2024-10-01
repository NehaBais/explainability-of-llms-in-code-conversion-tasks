Below is the equivalent C code to create a directory and any missing parents.

```c
#include <stdio.h>
#include <stdlib.h>

int makeDirectories(const char* path) {
    char buffer[1024];
    strncpy(buffer, path, sizeof(buffer));
    size_t len = strnlen(buffer, sizeof(buffer));

    for (size_t i = 0; i < len && buffer[i]; ++i) {
        if (buffer[i] == '/') {
            buffer[i] = '\0';
            if (mkdir(buffer, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) != 0 && errno != EEXIST) {
                perror("mkdir failed");
                return -1;
            }
            buffer[i] = '/';
        }
    }

    if (mkdir(path, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) != 0 && errno != EEXIST) {
        perror("mkdir failed");
        return -1;
    }

    return 0;
}

int main() {
    const char* path = "./path/to/dir";
    
    if (makeDirectories(path) == 0) {
        printf("Path successfully created\n");
    } else {
        fprintf(stderr, "Failed to create path: %s\n", path);
    }
    
    return 0;
}
```

This C function will make the directory specified by `path` along with any missing parent directories. If any of the directories already exist, it will not throw an error and continue making the next directory in the path. The `errno` variable is used to distinguish between errors other than "directory already exists".

This code should work on most POSIX-compliant operating systems, such as Linux and macOS, but please note that creating directories with specific permissions (e.g., using `S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH`) may not behave exactly the same across all systems due to different default umask settings.
