The C language does not have built-in support for file handling like Java, so we will use the POSIX API functions to check whether a file or directory exists in C. Here is how you can achieve this:

For the current working directory and a file in the filesystem root : 
```c
#include <sys/stat.h>
#include <stdio.h>

int main() {
    struct stat buffer;
  
    // Checking for docs/input.txt in current directory
    if(stat("docs/input.txt", &buffer) == 0) {
        printf("File exists in the current working directory.\n");
    } else {
        printf("File does not exist in the current working directory.\n");
    }
  
    // Checking for /docs/input.txt at root level
    if(stat("/docs/input.txt", &buffer) == 0) {
        printf("File exists at the root of filesystem.\n");
    } else {
        printf("File does not exist at the root of filesystem.\n");
    }
  
    return 0;
}
```
The `stat()` function is used to get file status in C, if it returns 0 then the file/directory exists otherwise doesn't exist.
