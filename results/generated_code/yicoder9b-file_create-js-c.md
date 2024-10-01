In C language there is no direct equivalent to JavaScript's File System access methods such as `writeFile` and `mkdir` functions provided by the 'fs' module. However, we can use POSIX-compliant system calls for file I/O operations in C.
Below is a rough approximation of how you might implement this in C:
```C
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int main() {
    // Create an empty file 'output.txt' in the current directory and root filesystem twice
    int fd = open("output.txt", O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);
    if (fd == -1) {
        perror("open error"); 
        return 1; 
    } else close(fd); // File created successfully. No need to write anything as it is supposed to be empty.

    // To create a file at root, you have to give the absolute path. For instance, '/output.txt'
    fd = open("/output.txt", O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);
    if (fd == -1) { 
        perror("open error"); 
        return 1; // Error condition
    } else close(fd);  // File created successfully. No need to write anything as it is supposed to be empty.

    // To create a directory, we use mkdir function provided by sys/stat.h
    if (mkdir("docs", S_IRWXU | S_IRWXG | S_IRWXO) == -1) { 
        perror("Cannot create directory 'docs'");  
        return 2; // Error condition.
    }   

    // To create a directory at root, you have to give the absolute path. For instance, '/docs'
    if (mkdir("/docs", S_IRWXU | S_IRWXG | S_IRWXO) == -1) { 
        perror("Cannot create directory '/docs'");  
        return 2; // Error condition.
    }   

    return 0; 
}
```
This program will create an empty file named "output.txt" and two directories named 'docs' in the current working directory as well as at root level filesystem twice each with read/write permissions for owner, group and others. If any error occurs during creation it prints an appropriate error message to stderr.
