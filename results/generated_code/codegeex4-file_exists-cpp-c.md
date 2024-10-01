Here is the equivalent C code:

```c
#include <stdio.h>
#include <stdlib.h>

void file_exist(const char* path, const char* type) {
    FILE *file = fopen(path, "r");
    
    if (file != NULL) {
        printf("%s exists", path);
        
        fseek(file, 0L, SEEK_END);
        long size = ftell(file);
        
        fclose(file);
        
        if(type == "directory") {
            printf(" with a file size of %ld bytes.\n", size);    
        } else {
            printf("\n");
        }
    } else {
        printf("%s does not exist\n", path);
    }
}

int main() {
    char cwd[1024];
    if (getcwd(cwd, sizeof(cwd)) != NULL) {
        file_exist("input.txt", "file");
        file_exist("zero_length.txt", "file");
        
        strcpy(cwd + strlen(cwd), "/docs/");
        file_exist(cwd, "directory");
        
        char root[1024];
        strcpy(root, "/");
        strcpy(root + 1, cwd + 1);
        
        file_exist(root, "file");
    } else {
        perror("getcwd() error");
        return 1;
    }
}
```

Please note that this C code does not check if the directory 'docs' exists because it's considered part of the path. If you want to do so, you can simply call `file_exist("/docs", "directory")` after getting the current working directory.

Also remember to include the appropriate header files (`#include <stdio.h>` for standard input/output operations and `<stdlib.h>` for the exit() function).
