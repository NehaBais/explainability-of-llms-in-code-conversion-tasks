C++17 filesystem library is not available in C standard library, as it requires a C++ compiler and -std=c++17 flag. But you can use the POSIX system calls for file operations to get the size of a file. Here is the equivalent code in C with the help of the fopen(), fseek() and ftell() functions from stdio.h library:

```C
#include <stdio.h>

void print_file_size(const char* filename)  {
    FILE *file = fopen(filename, "r");
    
    if (file == NULL){
        printf("Could not open file %s\n", filename);
        return;
    }
    
    fseek(file, 0L, SEEK_END);
    long size = ftell(file);
    
    printf("Size of file %s is %ld bytes.\n", filename, size);
    
    fclose(file);
}

int main() {
    print_file_size("input.txt");
    // for the root directory just use "/" in place of "./"
    print_file_size("/input.txt"); 
}
```
Please note that you need to run this C code on a Unix-based system because POSIX is not part of any standard and it's supported only on these systems. Also, the file path "/input.txt" assumes that there's an "input.txt" in root directory which might not exist or may require superuser privileges to access.

