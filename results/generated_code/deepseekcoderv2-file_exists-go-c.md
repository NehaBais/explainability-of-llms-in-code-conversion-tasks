 To convert the given Go code to C, we need to use the appropriate functions and libraries in C to check for the existence of a file and directory. Here's how you can do it:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

void printStat(const char *path) {
    struct stat fileStat;
    if (stat(path, &fileStat) == -1) {
        perror("Error");
        return;
    }

    if (S_ISDIR(fileStat.st_mode)) {
        printf("%s is a directory\n", path);
    } else if (S_ISREG(fileStat.st_mode)) {
        printf("%s is a file\n", path);
    } else {
        printf("%s is of an unknown type\n", path);
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

### Explanation:
1. **Include Necessary Headers**: We include headers for standard input/output, standard library functions, and system-specific file status functions.
2. **`printStat` Function**: This function takes a path as an argument, uses the `stat` system call to get the file status, and then checks if it's a directory or a file using `S_ISDIR` and `S_ISREG`.
3. **Main Function**: Calls `printStat` for both relative paths (`input.txt`, `docs`) and absolute paths (`/input.txt`, `/docs`).

This C code will perform the same checks as the Go code, verifying the existence of files and directories at specified paths.
