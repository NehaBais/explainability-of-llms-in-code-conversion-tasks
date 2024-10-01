In C, the standard library does not provide a direct function for getting the size of a file. Therefore, it is necessary to use specific system calls. The following code snippet shows how to get the size of a file in C:

```c
#include <stdio.h>
#include <sys/stat.h>

void print_file_size(const char* filename) {
    struct stat st;  // variable for storing information about the file
    if (stat(filename, &st) == 0) { // get information from the file
        printf("Size of file %s is %ld bytes.\n", filename, st.st_size);
    } else {
        perror("Error getting file size");
    }
}

int main() {
    print_file_size("input.txt");
    print_file_size("/input.txt");
    return 0;
}
```

The 'stat' function in the C standard library is used to fill a struct named 'st' with information about the file. If 'stat' returns 0, then we can safely use 'st.st_size' to get the size of the file. If it returns -1 and sets errno to an error code, then we print out the error using perror().

Please note that C lacks exception handling like C++. If any error occurs during the file operation, perror() will output the error message to stderr. This is a common practice in C programming.
