To convert the given C++ code to C, you can use the POSIX API. Here's how you can implement it:

```c
#include <stdio.h>
#include <stdlib.h>
#include <sys/statvfs.h>

void print_file_size(const char* filename) {
    struct statvfs info;
    if (statvfs(filename, &info) == 0) {
        printf("Size of file %s is %ld bytes.\n", filename, info.f_blocks * info.f_bsize);
    } else {
        perror("Failed to get file size");
    }
}

int main() {
    print_file_size("input.txt");
    print_file_size("/input.txt");
    return 0;
}
```

### Explanation:
1. **`#include <stdio.h>`**: This is necessary for standard input/output functions.
2. **`#include <stdlib.h>`**: This is necessary for the `EXIT_FAILURE` macro, which can be used to terminate the program.
3. **`#include <sys/statvfs.h>`**: This header provides information about file system statistics.
4. **`print_file_size(const char* filename)`**:
   - It reads the size of a file using `statvfs`.
   - If successful, it prints the size in bytes.
   - If there is an error, it uses `perror` to print the error message.
5. **`main()`**: The main function calls `print_file_size` for both "input.txt" and "/input.txt".
6. **Return 0**: This ensures that the program exits cleanly.

This C code achieves the same functionality as the original C++ code but uses POSIX system calls instead of C++ features like `filesystem`.
