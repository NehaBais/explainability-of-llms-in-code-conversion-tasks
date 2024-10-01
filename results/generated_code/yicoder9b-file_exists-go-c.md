Below is the equivalent C code for the provided Golang script: 

```c
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

void printStat(char *p) {
    struct stat st;

    if (stat(p, &st) == 0) {
        if ((st.st_mode & S_IFMT) == S_IFDIR) {
            printf("%s is a directory\n", p);
        } else if ((st.st_mode & S_IFMT) == S_IFREG){
             printf("%s is a file\n", p);
        } 
    } else {
         perror(p);  // Print the error message if stat() fails
    }
}   

int main(){
    printStat("input.txt");
    printStat("/input.txt");
    printStat("docs");
    printStat("/docs");
 
    return 0;
}  
```

This C code performs the same function as your Golang script. It uses the `stat()` system call to get information about a file or directory, and then checks if it is a regular file (`S_IFREG`) or a directory (`S_IFDIR`) using bitwise operations on the file's mode. If the `stat()` call fails for any reason (such as the file/directory not existing), the system error message will be printed.
