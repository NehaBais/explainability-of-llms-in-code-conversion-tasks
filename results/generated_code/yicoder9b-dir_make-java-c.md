Below is the C version of your Java code:

```C
#include <stdio.h>
#include <sys/stat.h>
#include <errno.h>

int createDirectory(const char *path) {
    struct stat st;
    mode_t mode = 0755;  // default file permissions, change as needed

    if (stat(path, &st) == 0) // path already exists
        return 1;

    if (errno != ENOENT || mkdir(path, mode) < 0) {
        perror("Error creating directory: ");
        return -1;  // error occurred
    }
    else return 1; // Directory created successfully.
}
```
This function `createDirectory` will create a single path string in a cross-platform manner using C language's POSIX API. It uses `stat()` to check if the directory already exists, and only attempts to make it with `mkdir()` when it does not exist. If an error occurs during creating process, this function returns -1, and prints out the error message.
Please remember that you will need to include necessary header files like <sys/stat.h> for `mkdir` and `stat` functions, and errno.h for `errno` variable in C code. 

You should be aware that this is a simple implementation and might not handle all edge cases or nested parent directories. For a more robust solution you may need to implement logic to create parent directories as well.
