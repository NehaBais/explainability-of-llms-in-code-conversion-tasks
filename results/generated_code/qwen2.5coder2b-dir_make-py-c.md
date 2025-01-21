Sure, below is the equivalent code in C:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Create a directory and any missing parents.
int mkdirp(const char *path) {
    if (mkdir(path, 0755) != 0 && errno == ENOENT) {
        // Directory does not exist. Recursively create the parent directories.
        int ret = mkdirp(dirname(path));
        if (ret == -1) {
            perror("mkdirp");
            return -1;
        }
    } else if (errno != 0) {
        perror("mkdirp");
        return -1;
    }

    return 0;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s path/to/dir\n", argv[0]);
        return 1;
    }

    int result = mkdirp(argv[1]);

    if (result == 0) {
        printf("Directory created or already exists.\n");
    } else {
        printf("Failed to create directory: %s\n", strerror(errno));
    }

    return 0;
}
```

### Explanation:
- **Function `mkdirp`:**
  - Takes a single string argument representing the path.
  - Uses `mkdir` function with mode `0755` (which sets file permissions).
  - If the directory does not exist, it recursively calls itself to create all parent directories using `dirname`.
  - Handles errors by printing an error message and returning `-1`.

- **Main Function:**
  - Checks if a path is provided as an argument.
  - Calls `mkdirp` with the provided path and handles the return value.

### Compile:
To compile this code, you can use a C compiler like `gcc`. For example:

gcc -o mkdirp mkdirp.c

Then run the compiled program:

./mkdirp /path/to/dir

This will create the specified directory and its parents if they do not exist.
