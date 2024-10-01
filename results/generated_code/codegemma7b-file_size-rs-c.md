```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Error: No file name supplied\n");
        exit(1);
    }

    char *file_name = argv[1];
    struct stat metadata;

    if (stat(file_name, &metadata) == -1) {
        fprintf(stderr, "Error: Could not get metadata for file '%s'\n", file_name);
        exit(2);
    }

    printf("Size of file '%s' is %ld bytes\n", file_name, metadata.st_size);

    return 0;
}
```
