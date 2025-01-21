Sure! Here is how you can implement a similar functionality in C using `mkdir` and `mkpath` to create directories recursively:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

// Function to check if directory exists or not
int dirExists(const char *dirPath) {
    struct stat st;
    if (stat(dirPath, &st) == 0 && S_ISDIR(st.st_mode)) {
        return 1; // Directory exists
    } else {
        return 0; // Directory does not exist
    }
}

// Function to create directory and any missing parents
void mkpath(const char *dirPath) {
    size_t len = strlen(dirPath);
    char path[len + 1];

    snprintf(path, len + 1, "%s", dirPath);

    for (size_t i = 0; i < len; ++i) {
        if (path[i] == '/' && !dirExists(path)) {
            path[i] = '\0';
            mkdir(path, 0755);
            path[i] = '/';
        }
    }

    if (!dirExists(path)) {
        mkdir(path, 0755);
    }
}

int main() {
    const char *dirPath = "./path/to/dir";
    mkpath(dirPath);
    printf("Directory created successfully\n");
    return 0;
}
```

### Explanation:

1. **`dirExists` Function**:
   - This function checks if a given directory exists by using `stat`. If the path is a directory, it returns 1 (true); otherwise, it returns 0 (false).

2. **`mkpath` Function**:
   - This function constructs the directory path and creates each parent directory as needed.
   - It iterates through each character in the path and checks if it is a directory separator (`/`). If it finds a directory separator and the corresponding directory does not exist, it creates that directory using `mkdir`.

3. **`main` Function**:
   - In the main function, we call `mkpath` with the desired directory path (`"./path/to/dir"`). If the directory is created successfully, it prints a success message.

### Notes:
- This code works on Unix-like systems (Linux, macOS) and will likely work cross-platform since `mkdir` is part of the POSIX standard.
- The permissions for the new directories are set to `0755` (read, write, execute for owner and read, execute for group and others).

Compile the C program with a C99 or later standard to ensure that variable-length arrays and other features are supported. For example:

gcc -o mkpath mkpath.c -std=c99

Run the compiled program:

./mkpath

This will create the directory and any missing parents as specified by the path `./path/to/dir`.
