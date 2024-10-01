Below is the equivalent C code for the given Java code:
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>

int main(void) {
    const char* filename = "output.txt";
    const char* dirname = "docs";
    
    if (creat(filename, S_IRUSR | S_IWUSR | S_IXUSR) != 0) {
        perror("File creation failed");
        return -1;
    }

    if (creat("/" filename, S_IRUSR | S_IWUSR | S_IXUSR) != 0) {
        perror("File creation failed");
        return -1;
    }

    if (mkdir(dirname, S_IRUSR | S_IWUSR | S_IXUSR) != 0) {
        perror("Directory creation failed");
        return -2;
    }

    if (mkdir("/", dirname) != 0) {
        perror("Directory creation failed");
        return -3;
    }

    return 0;
}
```
Please note that `mkdir`, `creat`, and `perror` are not built-in functions in C. They are typically provided by the operating system's C library, or you can implement them using the POSIX functions from `<unistd.h>` and `<errno.h>`. Also note that `/` is the root directory (/) in Unix-like systems.
In C, to create a file with certain permissions, we use `creat(filename, mode)` function instead of `File::createNewFile()`. The same goes for creating a directory. In this example, `S_IRUSR`, `S_IWUSR`, and `S_IXUSR` are the permissions for owner, group, and others to read, write, and execute respectively. The value of these constants can vary depending on the operating system and version, so check the documentation or use a tool like `getconf` if needed.
Additionally, instead of printing the error message using `System.err.println()`, you can directly print it with `perror()`. This will provide more information about what went wrong in case of an error.
