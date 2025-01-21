Sure, here is the equivalent code in C. Note that there isn't a direct equivalent to `std::filesystem` in C, but we can use the POSIX API for file and directory operations.

```c
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/stat.h>

void file_exists(const char* path) {
    printf("%s", path);
    struct stat buffer;
    if (stat(path, &buffer) == 0) {
        if (S_ISDIR(buffer.st_mode)) {
            printf(" is a directory\n");
        } else if (S_ISREG(buffer.st_mode)) {
            printf(" exists with a file size of %ld bytes.\n", buffer.st_size);
        }
    } else {
        printf(" does not exist\n");
    }
}

int main() {
    file_exists("./input.txt");
    file_exists("/zero_length.txt"); // Assuming 'zero_length.txt' is in the root directory
    file_exists("./docs/input.txt");
    file_exists("/docs/zero_length.txt"); // Assuming 'zero_length.txt' is in the '/docs' directory in the root

    return 0;
}
```

This C code uses `stat` to check if a file or directory exists and then determines whether it's a regular file, directory, or something else. The `./` prefix denotes the current working directory, and no prefix assumes the filesystem root.

Please ensure that:
1. `input.txt` is present in the current working directory.
2. `zero_length.txt` is present in either the current working directory or the filesystem root.
3. `docs/input.txt` is present in a subdirectory called `docs` in the current working directory, and similarly for `zero_length.txt`.

You can adjust the paths as needed based on your actual file system structure.
