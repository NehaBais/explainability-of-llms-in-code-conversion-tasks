Sure, here is the equivalent code in C. Note that there's no built-in support for file system operations as robust as `std::filesystem` in C++. However, you can use the `<sys/stat.h>` library to get the size of a file.

Here is the converted code:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_file_size(const char* filename) {
    struct stat buf;
    if (stat(filename, &buf) == 0) {
        printf("Size of file %s is %ld bytes\n", filename, buf.st_size);
    } else {
        perror("Error getting file size");
    }
}

int main() {
    print_file_size("input.txt");
    print_file_size("/input.txt");
}
```

Explanation:
1. **`struct stat`**: This structure is used to store information about a file.
2. **`stat` function**: This function takes two arguments: the path to the file and a pointer to a `struct stat` where the file's information will be stored. If the function succeeds, it returns 0; otherwise, it returns -1 and sets `errno` accordingly.

This code should provide similar functionality to your original C++ code by printing the size of the files in bytes or an error message if the file cannot be accessed.
