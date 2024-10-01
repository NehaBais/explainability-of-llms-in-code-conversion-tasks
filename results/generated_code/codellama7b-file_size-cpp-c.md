 Here is the code in C:
```
#include <stdio.h>
#include <stdlib.h>

void print_file_size(const char* filename) {
    FILE *fptr;
    if ((fptr = fopen(filename, "r")) == NULL) {
        printf("Error: unable to open file %s\n", filename);
        return;
    }

    // Get the size of the file
    fseek(fptr, 0, SEEK_END);
    long filesize = ftell(fptr);
    rewind(fptr);

    printf("Size of file %s is %ld bytes.\n", filename, filesize);

    // Close the file
    fclose(fptr);
}

int main() {
    print_file_size("input.txt");
    print_file_size("/input.txt");
    return 0;
}
```
This code uses the `fopen()`, `ftell()`, and `fseek()` functions to open, read, and seek through a file in C. The `rewind()` function is used to rewind the file pointer to the beginning of the file after determining its size. Finally, the file is closed using the `fclose()` function.

Note that this code will not work on Windows platforms because the POSIX functions used in this code are not available on Windows. If you need to run this code on a Windows platform, you can use the `_get_osfhandle()` and `_lseeki64()` functions instead of `ftell()` and `fseek()`, respectively.
