In C++, the FileSystemObject is not available directly, and must be done through system calls or library functions. Since we are only verifying file/folder existence, which can be done using `access` and `stat`, there's no need to create an object to access these features. Instead, we can use POSIX-style functions like `access` and `stat`. Here is how the conversion could look:
```cpp
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

int main() {
    // Check if 'input.txt' exists in current working directory
    if (access("input.txt", F_OK) != 0) {
        printf("'input.txt' does not exist\n");
    }

    // Check if 'c:/input.txt' exists in the filesystem root
    if (access("/home/user1/input.txt", F_OK) != 0) {
        printf("File '/home/user1/input.txt' does not exist\n");
    }
    
    // Check if 'docs' folder exists in current working directory
    if (access("docs", F_OK) != 0) {
        printf("'docs' folder does not exist\n");
    }

    // Check if 'c:/docs' folder exists in the filesystem root
    if (access("/home/user1/docs", F_OK) != 0) {
        printf("Folder '/home/user1/docs' does not exist\n");
    }

    return 0;
}
```
Note: The `stat` function is used to get file information, while the `access` function checks whether a file or directory exists. If you need to check for specific permissions (e.g., read, write), use the POSIX-style function `chmod`.
