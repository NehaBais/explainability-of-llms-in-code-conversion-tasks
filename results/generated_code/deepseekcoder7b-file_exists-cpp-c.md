C++17 filesystem library is not available in C language and it might not be supported by all compilers, so you need to use platform-specific APIs for file operations like checking if a file or directory exists etc. Here's the equivalent code snippet using POSIX system calls which work on most Unix systems:

```c
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

void file_exists(const char *path) {
    struct stat path_stat;
    int result = stat(path, &path_stat);
    
    if (result == 0) {
        switch (path_stat.st_mode & S_IFMT) {
            case S_IFDIR:  printf("%s is a directory\n", path);       break;
            case S_IFREG:  printf("%s exists with a file size of %ld bytes.\n", path, path_stat.st_size);    break;
            default:        printf("%s exists but is not a regular file or directory\n", path);   break;
        }
    } else {
        printf("%s does not exist\n", path);
    }
}

int main() {
	file_exists("input.txt");
	file_exists("zero_length.txt");
	file_exists("/docs/input.txt");  // Assuming docs is at the root of file system
	file_exists("/docs/zero_length.txt");  // Same as above
}
```
In this code, we use `stat()` function to get information about a file (or directory) in Unix-like systems. If file or directory exists then it will return 0 else -1 on error. For directories S_IFDIR is set and for regular files it is set as S_IFREG so accordingly messages are printed.

Please note that this C code assumes a UNIX/Linux environment with POSIX-compliant filesystem support (like Linux, BSD, Mac OS X). It might not work in Windows without additional libraries or APIs like the one for working with files and directories in C on Windows. 

Also, it does not check if file "input.txt" exists in directory where program was run as POSIX `stat()` function considers only paths from its current directory. If you want to specify a path relative to root of filesystem (like /), then include that absolute path in the function call like above examples show.

