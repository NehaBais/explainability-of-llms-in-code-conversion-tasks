Here is the converted C code:

```c
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

void print_file_size(const char* filename) {
    struct stat st;
    if (stat(filename, &st) == 0 && S_ISREG(st.st_mode)) {
        printf("Size of file %s is %ld bytes.\n", filename, (long int)st.st_size);
    } else {
        perror("Failed to get file status");
    }
}

int main() {
    print_file_size("input.txt");
    print_file_size("/input.txt");
}
```
In this C code, the `stat` function is used to get information about a file (including its size). The `S_ISREG` macro checks if the file mode indicates that it's a regular file (as opposed to a directory or symbolic link). This is equivalent to checking whether the file ends with '.txt'. If this succeeds and the file is a regular file, then we print its size; otherwise, we print an error message (from `perror`).
