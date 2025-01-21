Sure! Here is the equivalent code in C:

```c
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

void printFileSize(const char *f) {
    struct stat buf;
    if (stat(f, &buf) == 0) {
        printf("%ld\n", buf.st_size);
    } else {
        perror("Error getting file size");
    }
}

int main() {
    printFileSize("input.txt");
    printFileSize("/input.txt");
    return 0;
}
```

Explanation:
- The `stat` function in C is used to get the status of a file. It fills a `struct stat` with information about the file.
- If `stat` returns 0, it means the file was successfully accessed and the size can be printed.
- If there's an error (non-zero return value from `stat`), the `perror` function prints an error message associated with the current value of `errno`.
- The file sizes are printed in bytes.

To compile and run this C code, you can use a command like:

gcc -o file_size_example file_size_example.c
./file_size_example

This will print the sizes of `input.txt` in the current working directory and `/input.txt` (the root directory).
