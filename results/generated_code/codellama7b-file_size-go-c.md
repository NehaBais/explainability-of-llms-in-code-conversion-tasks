This code will check the size of a file in the current working directory, and another one in the file system root.
```
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main() {
    struct stat* stat;
    char* f = "input.txt";
    int status;

    // Check the size of file in current working directory
    if ((status = stat(f, &stat)) != 0) {
        perror("stat");
        exit(1);
    }
    printf("%ld\n", (long)stat.st_size);

    // Check the size of file in file system root
    char* root_file = "/input.txt";
    if ((status = stat(root_file, &stat)) != 0) {
        perror("stat");
        exit(1);
    }
    printf("%ld\n", (long)stat.st_size);
    return 0;
}
```
Note: The functions `stat`, `perror` and `exit` are used in the C code to check the size of a file, handle errors, and exit the program.
