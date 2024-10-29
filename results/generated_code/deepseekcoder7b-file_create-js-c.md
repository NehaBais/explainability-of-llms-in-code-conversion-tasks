C doesn't have a built-in module for filesystem manipulation similar to NodeJS, but you can do it using standard C functions like `open()` and `creat()` from `<fcntl.h>`, `<sys/stat.h>` and `<unistd.h>` in Unix systems or `CreateDirectory()`, `WriteFile()` etc. from `windows.h` for windows OS.

Here's the equivalent code:

```c
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
// For Windows, use #include "windows.h" and call CreateDirectory(), WriteFile() etc instead of open(), creat(), mkdir()

int main() {
    int fd;

    // creating an empty file called "output.txt" in the current directory ('.')
    if((fd = creat("./output.txt", O_WRONLY|O_CREAT)) == -1) {
        perror("Error: ");
        return 1;
    }
    close(fd);
    
    // creating an empty file called "output.txt" in the root directory ('/')
    if((fd = creat("/output.txt", O_WRONLY|O_CREAT)) == -1) {
        perror("Error: ");
        return 1;
    }
    close(fd);
    
    // creating a new directory called "docs" in the current directory ('.')
    if((mkdir("./docs", S_IRWXU)) == -1) {
        perror("Error: ");
        return 1;
    }
        
    // creating a new directory called "docs" in the root directory ('/')
    if((mkdir("/docs", S_IRWXU)) == -1) {
        perror("Error: ");
        return 1;
    }
    
    return 0;
}
```
Please note that running this program would require appropriate permissions, typically root (sudo). Also, using '/' for creating in the root directory is not recommended as it can overwrite important system files. Instead use a path inside your home folder or choose another location. Be careful with file operations in C as they are more error-prone and complex than JavaScript.

