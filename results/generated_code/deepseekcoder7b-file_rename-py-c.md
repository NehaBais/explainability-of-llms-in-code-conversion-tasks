The C programming language does not have a built-in equivalent of Python's `os` module, but on Unix systems you would use the functions from the Standard Library such as `rename()` and `chdir()`. Here is how to accomplish your task in C code. This program must run with root privileges (sudo) because it changes files/directories of the whole file system:
```c
#include <stdio.h>
#include <unistd.h>

int main(void) {
    // Rename here
    if (-1 == rename("input.txt", "output.txt")) {
        perror("rename");
        return 1;
    }
    
    if (-1 == rename("docs", "mydocs")) {
        perror("rename");
        return 1;
    }
  
    // Change to root directory, not necessarily required in this case as renames are done at file system level.
    /*if(-1 == chdir("/") ) {
      perror("chdir");
      return 1;
     }*/
   
    // Rename in the root (/) directory is possible but it's not generally recommended because it can affect other directories as well.
   /* if (-1 == rename("/input.txt", "/output.txt")) {
        perror("rename");
        return 1;
    }
    
    if (-1 == rename("/docs", "/mydocs")) {
        perror("rename");
        return 1;
    }*/
  
    return 0;
}
```
This C code will attempt to rename the files and directories "input.txt" and "docs" in the current directory, as well as the root directory ("/"). If it encounters an error while trying this operation, perror() function is used to print a meaningful message about the specific nature of that error. However, you would usually not need to run these operations from within another process with more privileges than yours, unless they are system-wide changes and you're root.

