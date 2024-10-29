To accomplish the same task in C, you will need to use functions available from standard libraries such as `access` and `opendir` for directory checking and `stat` for file existence. 

Here is an example of how it could be done using POSIX system calls on a Unix/Linux environment:
```c
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <stdio.h>

void file_exists(char *filename) {
    struct stat buffer;
    int exist = stat (filename, &buffer);
    if (exist == 0)
        printf ("File %s exists.\n", filename);
    else
        perror ("Error: File does not exist.");
}

void directory_exists(char *dirname) {
   DIR* dir = opendir(dirname);
   if (dir) { 
      printf("Directory %s exists.\n", dirname);
      closedir(dir);
    } else if (ENOENT == errno) {
      perror ("Error: Directory does not exist.");
    } else {
      perror ("Error: opendir");
   }
}

int main() {
     file_exists("input.txt");
     directory_exists("docs");
     // You can replace '/' with your root filesystem path
     file_exists("/input.txt"); 
     directory_exists("/docs");   
     return 0;
}
```
In this code, the function `stat()` is used to check if a file exists and `opendir()` is used for checking directories. If they don't exist, it prints an error message. You may need to adjust pathnames according to your filesystem structure. 

Please note that these C commands would only work in a POSIX compliant environment (like Linux or Unix), as standard library calls are different on Windows. The equivalent functions for checking file and directory existence do not exist in the C language itself, they require platform-specific calls such as those shown above. 

Also, if your program needs to run with root privileges, you may need to use `sudo` or similar tools which is out of scope for this question.

