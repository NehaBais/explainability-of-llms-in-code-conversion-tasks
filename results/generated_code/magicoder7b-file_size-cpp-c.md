 Here is the equivalent C code for your given C++ code. Note that this C code uses POSIX file system functions (like fopen and fseek). 

```c
#include <stdio.h>
#include <stdlib.h>

long get_file_size(const char* filename) {
    FILE *fp;
    if ((fp = fopen(filename, "r")) == NULL) {
        printf("Unable to open file %s\n", filename);
        exit(1);
    }
    
    fseek(fp, 0L, SEEK_END);
    long size = ftell(fp);
    fclose(fp);
    
    return size;
}

int main() {
    printf("Size of file input.txt is %ld bytes\n", get_file_size("input.txt"));
    printf("Size of file /input.txt is %ld bytes\n", get_file_size("/input.txt"));
}
```
Please be aware that the above code makes assumptions about where "." and "/" represent in your filesystem, which may not always be true (e.g., on Windows). The POSIX standard for file paths does not specify a root directory, so "/input.txt" could be interpreted as "the input.txt in the current directory of whatever the root shell is". 

If you want to use this C code on a system with different conventions (like Windows), you may need to adjust it.
