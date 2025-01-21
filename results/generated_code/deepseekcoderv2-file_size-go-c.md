 Certainly! Below is the equivalent code in C that verifies the size of a file called `input.txt` for both the current working directory and the root of the file system:

```c
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/stat.h>

void printFileSize(const char *filename) {
    struct stat st;
    if (stat(filename, &st) == -1) {
        perror("Error");
    } else {
        printf("%zu\n", st.st_size);
    }
}

int main() {
    printFileSize("input.txt");
    printFileSize("/input.txt");
    return 0;
}
```

### Explanation:
1. **Header Files**: The C code includes necessary headers similar to the Go code.
2. **`printFileSize` Function**: This function takes a filename as an argument, uses `stat` to get file information, and prints the size if successful. If not, it prints an error using `perror`.
3. **`main` Function**: Calls `printFileSize` for both local (`input.txt`) and root (`/input.txt`).

### Notes:
- In C, the function to get file information is `stat`, which takes a filename and a pointer to a `struct stat`.
- The size of the file is accessed via `st.st_size`.
- Error handling in C uses `perror` for system errors (like file not found).
