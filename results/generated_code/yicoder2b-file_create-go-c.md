This is how the provided Golang code would be translated into C:

In C, we don't have a direct equivalent to creating empty files or directories, so we will use functions that manipulate filesystem entries. We can create an empty file using `open()` and write some data into it with `write()`. For creating directories, we use `mkdir()` function. However, keep in mind that the permissions are not preserved by these calls - they only affect the calling process's own permissions on the directory or file.

```C
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <errno.h>
#include <stdlib.h>

void createFile(const char *filename) {
    int fd;
    mode_t mode = S_IRUSR | S_IWUSR; 
    fd = open(filename, O_CREAT|O_WRONLY, mode);
    if (fd == -1) {
        printf("Cannot create file: %s\n", strerror(errno));
        return;
    }
    close(fd);
    printf("File %s created!\n", filename);
}

void createDir(const char *dirname) {
    if (mkdir(dirname, S_IRUSR | S_IWUSR) == -1) {
        printf("Cannot create directory: %s\n", strerror(errno));
    } else {
        printf("Directory %s created!\n", dirname);
    }
}

int main() {
    createFile("input.txt");
    createFile("/input.txt"); // will fail as "/input.txt" is absolute path and cannot be open in read mode by our user 
    createDir("docs");
    createDir("/docs"); // will fail as "/docs" is absolute path and it's not accessible to the program we are running
    return 0;
}
```
This C code is equivalent to the provided Golang code. It creates a file "input.txt" in the current working directory, tries to create an empty file with path "/input.txt" which fails because it's absolute path and not accessible by our user, and then creates a directory "docs" in the current working directory as well. For creating directories at filesystem root we would require root privileges and it might not be feasible for most normal applications.
