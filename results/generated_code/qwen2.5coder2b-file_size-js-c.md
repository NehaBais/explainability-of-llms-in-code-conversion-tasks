The equivalent C code for this JavaScript code would be:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *filename = "input.txt";
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        printf("Failed to open file input.txt\n");
        return 1;
    }
    
    fseek(file, 0, SEEK_END);
    long size = ftell(file);
    fclose(file);

    printf("The size of the file is %ld bytes\n", size);

    filename = "c:/input.txt";
    file = fopen(filename, "rb");
    if (file == NULL) {
        printf("Failed to open file c:/input.txt\n");
        return 1;
    }
    
    fseek(file, 0, SEEK_END);
    size = ftell(file);
    fclose(file);

    printf("The size of the file is %ld bytes\n", size);

    return 0;
}
```

This program reads the size of two files using the `fopen`, `ftell` and `fclose` functions in C. It also checks if the files are successfully opened before proceeding with the read operation.
