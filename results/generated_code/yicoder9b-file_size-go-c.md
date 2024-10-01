In C, there is no built-in function to get the file size like in GoLang. We have to use functions from `unistd.h` and `stat.h` to achieve this. Here's how you can do it:

```c
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

void printFileSize(char *f) {
    struct stat buf;
    if (stat(f, &buf) == 0) {
        printf("%ld\n", buf.st_size);
    } else {
        perror(f);
    }
}

int main() {
    printFileSize("input.txt");
    printFileSize("/input.txt");
    return 0;
}
```

The C code does the same as your GoLang code: it calls `stat()` to get information about a file and prints the size if successful, otherwise, it outputs an error message. This function works on both Linux and macOS systems.
