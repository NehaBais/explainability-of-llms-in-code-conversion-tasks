In C, we can use the `stdlib.h` library and its functions like `rename()` to achieve similar functionality with error checking. Here is the equivalent code in C:

```c
#include <stdio.h>

int main(void) {
    if (rename("input.txt", "output.txt") != 0){
        fprintf(stderr, "File move error: input.txt -> output.txt\n");
    }
        
    if (rename("docs", "mydocs") != <｜begin▁of▁sentence｜>0){
        fprintf(stderr, "File move error: docs -> mydocs\n");
    }
    
    // In C there is no way to rename in the filesystem root.
    // If we try to do it from a compiled program running as admin 
    // on Linux or macOS it can be done but you must prefix paths with / (or ./ for relative) and run this program as root:
    
    if (rename("/input.txt", "/output.txt") != 0){
        fprintf(stderr, "File move error: /input.txt -> /output.txt\n");
    }
        
    if (rename("/docs", "/mydocs") != 0){
        fprintf(stderr, "File move error: /docs -> /mydocs\n");
    } 
    
    return 0;
}
```
This C code will attempt to rename files and directories. If the operation fails, an error message will be printed out using `fprintf()`. Please note that renaming a file or directory in the root of the filesystem is typically not possible due to security concerns. You can only do this if your program has super user (root) privileges.

