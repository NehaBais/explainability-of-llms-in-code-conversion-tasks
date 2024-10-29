In C, you can use the `rename()` function from Standard Library. However, there is no standard way to rename directories in a similar manner as that of files. You need to handle this situation differently by using the `rmdir()` and `mkdir()` functions for directories. Here is an example:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Rename "input.txt" to "output.txt" in the current directory
    if(rename("input.txt", "output.txt") != 0) {
        perror("Error renaming 'input.txt' to 'output.txt': ");
        return 1;
    }
    
    // Rename "docs" to "mydocs" in the current directory
    if(rename("docs", "mydocs") != 0) {
        perror("Error renaming 'docs' to 'mydocs': ");
        return 1;
    }
  
    // You cannot rename a file at root level or in different location, because that requires superuser privileges.
    // And you can't rename directories by providing absolute path as C standard library does not support this operation.
    
    return 0;
}
```

This code assumes the names of the files and directory are relative to the current working directory of your program. If they were at a different location, an absolute path would be used instead of a relative one. However, such operations require root (superuser) privileges on most systems, which is not recommended due to potential security risks.

