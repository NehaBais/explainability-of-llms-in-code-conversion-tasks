Below is a C program that mimics the functionality of `mkdir -p` command. This program uses the `<sys/stat.h>` header for creating directories and the `<unistd.h>` header for file operations, and it also uses the `<string.h>` header for string manipulation.

```c
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

#define MAX_PATH_LENGTH 4096

void mkdirp(const char *path) {
    int ret;
    char dir[MAX_PATH_LENGTH];
    char *ptr;

    // Resolve the path to ensure it's absolute
    if (realpath(path, dir) == NULL) {
        perror("realpath");
        return;
    }

    ptr = dir;
    while ((ret = mkdir(ptr, 0755)) != 0 && errno == EEXIST) {
        // Directory already exists. Check if it's a directory.
        struct stat info;
        if (stat(ptr, &info) == -1) {
            perror("stat");
            free(dir);
            return;
        }
        if (!S_ISDIR(info.st_mode)) {
            perror("mkdir");
            free(dir);
            return;
        }
        ptr++;
    }

    // If we reached the end of the path without encountering an error,
    // it means all directories are created successfully.
    if (ret != 0) {
        perror("mkdir");
        free(dir);
        return;
    }

    free(dir);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <path>\n", argv[0]);
        return EXIT_FAILURE;
    }

    mkdirp(argv[1]);

    return EXIT_SUCCESS;
}
```

### Explanation:
1. **realpath**: This function converts the relative path to an absolute path.
2. **mkdir**: This function creates a new directory with permissions 755 (read, write, and execute by the owner).
3. **s_isdir**: This macro checks if a file is a directory.
4. **free**: This function frees dynamically allocated memory.

### Compilation:
To compile this program, you need to link against the C library (`-lc`). You can do this using the following command:


gcc -o mkdirp mkdirp.c -lc


### Usage:
You can run the program with a path as follows:


./mkdirp ./path/to/dir


This will create the directory specified by the path, and any missing parent directories will also be created.
