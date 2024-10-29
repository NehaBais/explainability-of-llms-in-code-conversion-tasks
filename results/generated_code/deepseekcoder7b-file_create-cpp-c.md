C++17 filesystem library is not available in C language but you can use the POSIX API to do this task, which includes creating directories and files. This requires including `<sys/types.h>`, `<sys/stat.h>` and `<fcntl.h>` header files for file operations.

Here is a simple translation of your code into C:
```c
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd = open("output.txt", O_WRONLY | O_CREAT);
    close(fd);
    
    chdir("/");  // Change to root directory

    fd = open("root_output.txt", O_WRONLY | O_CREAT);
    close(fd);

    mkdir("docs",0755);

    chdir("/");  // back to the root directory again
}
```
Please note: This code may not run as expected on every system, especially if you are running this from a different working directory. It's always safer and more portable to use functions like `mkdir()` in C when possible instead of relying directly on lower-level operations such as chdir() or open().

