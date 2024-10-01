In C programming language, the equivalent code would be:
```c
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main() {
    struct stat sb;

    if (stat("file.txt", &sb) == 0) {
        printf("%ld B\n", sb.st_size);
    } else {
        fprintf(stderr, "Unable to get size of file.txt\n");
    }

    if (stat("/file.txt", &sb) == 0) {
        printf("%ld B\n", sb.st_size);
    } else {
        fprintf(stderr, "Unable to get size of /file.txt\n");
    }

    return 0;
}
```
This C code uses the `stat` function from the Unix/Linux system calls library to obtain information about a file (in this case its size). If it successfully retrieves the data, it prints the file size in bytes. If not, it outputs an error message.
