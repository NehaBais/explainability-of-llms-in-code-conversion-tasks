```c
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main() {
    struct stat file1;
    struct stat file2;

    // Check the size of 'file.txt' in the current working directory
    if (stat("file.txt", &file1) != 0) {
        perror("Error getting file information");
        exit(EXIT_FAILURE);
    }
    printf("%ld B\n", (long long)file1.st_size);

    // Check the size of 'file.txt' in the root directory
    if (stat("/file.txt", &file2) != 0) {
        perror("Error getting file information");
        exit(EXIT_FAILURE);
    }
    printf("%ld B\n", (long long)file2.st_size);

    return EXIT_SUCCESS;
}
```
In this solution, we are using the `stat` function to get the size of a file and storing it in the `struct stat` variable. Then we use the `printf` function to print out the size in bytes. The `exit(EXIT_FAILURE)` function is used if any error occurs during the file size checking process.
