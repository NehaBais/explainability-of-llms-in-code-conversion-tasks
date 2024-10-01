To convert the code from Go to C, you can use the following structure:
```c
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main() {
    // Create an empty file in the current working directory
    char *filename = "output.txt";
    int fd = creat(filename, 0644);
    if (fd == -1) {
        perror("Error creating file");
        return 1;
    }
    printf("File %s created!\n", filename);
    close(fd);
    
    // Create an empty directory in the current working directory
    char *dirname = "docs";
    int dir_fd = mkdir(dirname, 0755);
    if (dir_fd == -1) {
        perror("Error creating directory");
        return 1;
    }
    printf("Directory %s created!\n", dirname);
    
    // Create an empty file in the root directory
    filename = "/output.txt";
    fd = creat(filename, 0644);
    if (fd == -1) {
        perror("Error creating file");
        return 1;
    }
    printf("File %s created!\n", filename);
    close(fd);
    
    // Create an empty directory in the root directory
    dirname = "/docs";
    dir_fd = mkdir(dirname, 0755);
    if (dir_fd == -1) {
        perror("Error creating directory");
        return 1;
    }
    printf("Directory %s created!\n", dirname);
    
    return 0;
}
```
Note that in C, the `creat` function is used to create a new file with the specified mode, and the `mkdir` function is used to create a new directory. The `close` function is used to close the file descriptor after it has been created.

Also note that in C, there are no built-in functions for creating directories, so you will need to use the `mkdir` function to do this.

It's important to note that in C, the `creat` and `open` functions create a new file with read/write permission by default, if you want to specify another permission mode you can use the `O_CREAT` flag along with the `mode` parameter.

int fd = creat("output.txt", O_CREAT | O_EXCL, 0644);

This will create a new file with read/write and execute permission.
