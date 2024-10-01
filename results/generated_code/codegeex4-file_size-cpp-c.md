Here's how you can convert the given C++ code to a C code. The C standard library does not directly support file system operations (like determining file size), which are available in C++. To get the file size, we have to use system-specific calls.

Here is an example using Unix-based systems:

```C
#include <stdio.h>
#include <stdlib.h>

void print_file_size(char *filename) {
    FILE* fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    fseek(fp, 0L, SEEK_END);
    long size = ftell(fp);

    printf("Size of file %s is %ld bytes.\n", filename, size);

    fclose(fp);
}

int main() {
    print_file_size("./input.txt");   // Current directory
    print_file_size("/input.txt");    // Root directory (May require admin rights)
}
```
This program first attempts to open the file with 'r' mode. If it fails, an error message is printed and the program exits. 

Then we move the file pointer to the end of the file by calling fseek(). After that, ftell() returns the current value of the file pointer's position, which corresponds to the size of the file.

Finally, we print the size of the file and close the file with fclose().
