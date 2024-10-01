The equivalent code in C would be:

```c
#include <stdio.h>
#include <stdlib.h>

void create(const char *directory){
    char filepath[1024];
    snprintf(filepath, sizeof(filepath), "%s/output.txt", directory);
    FILE *fp = fopen(filepath, "w");
    if (fp == NULL) {
        perror("Error creating file");
        exit(1);
    }
    fclose(fp);

    snprintf(filepath, sizeof(filepath), "%s/docs", directory);
    int status = mkdir(filepath, 0755);
    if (status != 0) {
        perror("Error creating directory");
        exit(1);
    }
}

int main(){
    create(".");
    create("/");
    
    return 0;
}
```

This C code does the same job as the Python script. It creates an empty file "output.txt" and a directory "docs" in both the current working directory (".") and root directory ("/"). The `snprintf` function is used to generate the full path to the file or directory before calling `fopen` to create the file or `mkdir` to create the directory. 

Note that error handling for file operations differs between Python and C - in this case we use `perror` to print an error message if something goes wrong, and `exit(1)` to terminate the program.
