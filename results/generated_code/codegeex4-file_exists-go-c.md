Below is the equivalent C code for your Golang program. In this conversion, we use the `stat` and `errno.h` header files to perform similar operations to those in the Go code.

```c
#include <stdio.h>
#include <sys/stat.h>
#include <errno.h>

void printStat(const char *path) {
    struct stat info;
    
    if (stat(path, &info) == -1) {
        perror(path);
        return;
    }

    if (S_ISDIR(info.st_mode)) {
        printf("%s is a directory\n", path);
    } else if (S_ISREG(info.st_mode)) {
        printf("%s is a file\n", path);
    } else {
        printf("%s: unknown type\n", path);
    }
}

int main() {
    printStat("input.txt");
    printStat("/input.txt");
    printStat("docs");
    printStat("/docs");

    return 0;
}
```

Note:
1. `stat` returns 0 on success and -1 on error, similar to Go's `os.Stat`.
2. The function `S_ISDIR` checks if the given mode represents a directory, and `S_ISREG` checks if it represents a regular file.
3. `perror` prints a descriptive error message for the last error that occurred, similar to Go's `fmt.Println(err)`.
