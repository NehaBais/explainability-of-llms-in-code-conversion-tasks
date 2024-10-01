Converting this JavaScript code to C involves using POSIX file functions, `stat()` and `access()`. Below is the equivalent C program:

```C
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int check_file(const char *path) {
    struct stat st;

    if (stat(path, &st) != 0){
        return -1; // Error occurred while checking the file.
    }

    // If it is a directory return 2 else if it's a regular file then return 1
    if ((st.st_mode & S_IFMT) == S_IFDIR) {
        return 2;  
    } 
    else if ((st.st_mode & S_IFREG)) {
       return 1; // it's a regular file
    }
   
    // If the control reaches here that means there is some other type of file like device files etc
    return -2;  
} 

int main() {

     printf("Checking for input.txt and docs in current directory:\n");
     if (check_file("input.txt") == 1){
         printf("input.txt is a regular file\n");  
     } else if (check_file("docs") == 2){
        printf("docs is directory\n");   
     } else {
       printf("File or directory doesn't exist in current working directory or it may be of some other type.\n");  
    }

     printf("Checking for c:/input.txt and c:/docs:\n");
     if (check_file("c:/input.txt") == 1){
        printf("c:/input.txt is a regular file\n");   
     } else if (check_file("c:/docs") == 2){
       printf("c:/docs is directory\n");    
     } else {
       printf("File or directory doesn't exist in root filesystem or it may be of some other type.\n");  
    }
   return 0;
 }
```
This C program checks if a file/directory exists and returns the appropriate status code. Note that error handling is also taken care with `stat()` function, which returns -1 when an error occurs during checking of the file or directory. This C program needs to be compiled and run in an environment where it has access rights for the specified paths (current working directory, filesystem root etc).
