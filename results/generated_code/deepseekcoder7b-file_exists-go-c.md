Below is the C equivalent of your Go code, using the dirent API for checking if a directory exists and file handling functions to check whether a regular file exists. In this case, we are considering root path as "/". Please note that in C you need to compile it with `-dirent` flag so it can access directory entries.

```c
#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <string.h>
#include <errno.<｜begin▁of▁sentence｜>

void printStat(char *path) {
    struct stat info; 
    if (stat(path, &info)!=0){ 
        switch (errno) {
            case ENOENT: printf ("%s does not exist\n", path); break;
            default: perror("lstat"); 
        }
    
    } else if(S_ISDIR(info.st_mode)) {
       printf("%s is a directory\n", path);
    
    } else{
       printf ("%s is a file\n", path);
    }
}

int main()  {
    printStat("input.txt");
    printStat("/input.txt");
    printStat("docs");
    printStat("/docs");
    
    return 0;
}
```
This program will check if the "input.txt" file and the "docs" directory exist in two locations: current working directory (cwd) of the process running this code, and at filesystem root (/). The function `stat(2)` is used to get information about a file or a directory. If the pathname does not represent an existing entity, stat() returns -1 with errno set to indicate the error.

