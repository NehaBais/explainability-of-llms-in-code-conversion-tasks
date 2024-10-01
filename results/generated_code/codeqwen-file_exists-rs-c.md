In C, the code would look like this:

```c
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main() {
    char* files[] = {"input.txt", "docs", "/input.txt", "/docs"};
    struct stat info;
    
    for (int i=0; i<4; i++) {
        if(stat(files[i], &info) == 0){
            if(S_ISDIR(info.st_mode)){
                printf("%s is a directory\n", files[i]);
            } else if (S_ISREG(info.st_mode)){
                printf("%s Is a file\n", files[i]);
            }
        } else {
            perror(files[i]);
        }
    }
    return 0;
}
```
This C code does the same as your Rust code. It verifies whether each of the specified paths is a file or directory. If it cannot stat() the path, perror() will print an error message and return -1.
