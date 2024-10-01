Here is a C code snippet that achieves the same functionality:

```C
#include <stdio.h>

int main() {
    FILE *file = fopen("input.txt", "r");
    if (file) {
        fseek(file, 0, SEEK_END);
        long size = ftell(file);
        printf("Size of input.txt: %ld bytes\n", size);
        fclose(file);
    }

    FILE *rootFile = fopen("/input.txt", "r");
    if (rootFile) {
        fseek(rootFile, 0, SEEK_END);
        long rootSize = ftell(rootFile);
        printf("Size of /input.txt: %ld bytes\n", rootSize);
        fclose(rootFile);
    }

    return 0;
}
```

Note: This code will only give you the size of the file if it exists and can be opened in read mode. If the file doesn't exist or cannot be opened, then `file` (or `rootFile`) will be NULL and nothing will be printed for that file.
