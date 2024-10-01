The C standard library does not have a built-in filesystem manipulation like in C++, so we will use POSIX functions provided by the unistd.h library to get file size. Here is an equivalent code snippet in C:

```c
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

void print_file_size(const char* filename) {
    struct stat st;
    if (stat(filename, &st) == 0) {
        printf("Size of file %s is %ld bytes.\n", filename, st.st_size);
    } else {
        perror("Error:");
    }
}

int main() {
    print_file_size("input.txt");
    print_file_size("/input.txt");
    return 0;
}
```
This C code will give the size of a file in bytes using POSIX functions from unistd.h and sys/stat.h libraries. The stat function retrieves information about a file. If it is successful, it stores the information in the structure pointed to by the buffer argument. 

The st_size member of this structure specifies the size of the file in bytes.
