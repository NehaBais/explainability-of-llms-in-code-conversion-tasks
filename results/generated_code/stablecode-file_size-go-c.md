Here is your Go code converted to C:

Please note that because this is a conversion from Go to C, there may be language differences or limitations in the C version that don't exist in the Go version.

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

void printFileSize(char* fileName) {
    struct stat statBuffer;

    if (0 != stat(fileName, &statBuffer))) {
        fprintf(stderr, "Error occurred while accessing the file: %s\n", strerror(errno)));
        exit(-1);
    } else {
        printf("File size is %lld bytes.\n", (long long)statBuffer.st_size));
    }
}

int main() {
    printFileSize("input.txt");
    printFileSize("/input.txt");

    return 0;
}
```

Please note that the above conversion assumes you are running on a Unix-like operating system, since Go code using `os.Stat()` will work similarly in C.
