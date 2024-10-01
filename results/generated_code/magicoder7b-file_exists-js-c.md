 Unfortunately, there is no direct equivalent of ActiveXObject in C language to perform the same task as JavaScript's FileSystemObject does because C is a lower-level language that doesn't have built-in support for such operations. However, we can use POSIX system calls (`stat()`) or the Windows API (`GetFileAttributes()` and `GetVolumeInformation()`), depending on which platform you are working on (Unix/Linux vs Windows).

Here is a simple C example using Unix's stat() system call:

```c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // for chdir, getcwd
#include <sys/stat.h> // for stat

int main(void) {
    char cwd[1024];
    if (getcwd(cwd, sizeof(cwd)) != NULL) printf("Current directory: %s\n", cwd);
    
    // check file and directory existence in current dir
    struct stat st; 
    if (!stat("input.txt", &st)) { 
        printf("File input.txt exists.\n"); 
    } else {
        printf("File input.txt does not exist.\n"); 
    }
    
    // check directory existence in current dir
    if (!stat("docs", &st) && S_ISDIR(st.st_mode)) { 
        printf("Directory docs exists.\n"); 
    } else {
        printf("Directory docs does not exist.\n"); 
    }

    // change to root directory and check there
    if (chdir("/") != -1) {
        printf("Changed to root directory. Checking there...\n");
        
        // check file existence in root dir
        if (!stat("/input.txt", &st)) { 
            printf("File /input.txt exists.\n"); 
        } else {
            printf("File /input.txt does not exist.\n"); 
        }
        
        // check directory existence in root dir
        if (!stat("/docs", &st) && S_ISDIR(st.st_mode)) { 
            printf("Directory /docs exists.\n"); 
        } else {
            printf("Directory /docs does not exist.\n"); 
        }
    } else {
        printf("Failed to change to root directory!\n");
    }
    
    return 0;
}
```
Note: Remember that C language doesn't have the built-in way of working with file paths like JavaScript does. You should be careful when using absolute paths in your code to avoid any path related issues. Also, this C program is assuming a Unix-like environment (Linux or MacOS) because the POSIX API used here is available only on these systems. If you want to run this on Windows, you would need to use the Windows API instead of POSIX calls.
