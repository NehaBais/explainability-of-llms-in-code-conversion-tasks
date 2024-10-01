 The equivalent C code would be:

```c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>

void printFileSize(char* f) {
    struct stat st;
    if (stat(f, &st) == 0) {
        printf("%ld\n", (long int) st.st_size);
    } else {
        perror("stat");
    }
}

int main() {
    printFileSize("input.txt");
    printFileSize("/input.txt");

    return 0;
}
```
This C code does essentially the same thing as the Go code, with minor differences due to language-specific features. It uses `stat` system call to obtain file size in the `printFileSize` function, and handles error when it fails by calling `perror`.
