```c
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

void createFile(const char* fn) {
    FILE *f = fopen(fn, "w");
    if (f == NULL) {
        perror("Error creating file");
        return;
    }
    printf("file %s created!\n", fn);
    fclose(f);
}

void createDir(const char* dn) {
    int err = mkdir(dn, 0755);
    if (err != 0) {
        perror("Error creating directory");
        return;
    }
    printf("directory %s created!\n", dn);
}

int main() {
    createFile("output.txt");
    createDir("docs");

    char* rootPath = "/output.txt";
    FILE *f = fopen(rootPath, "w");
    if (f != NULL) {
        printf("file %s created in the root!\n", rootPath);
        fclose(f);
    }

    char* docsPath = "/docs";
    int dirErr = mkdir(docsPath, 0755);
    if(dirErr == 0){
        printf("directory %s created in the root!\n", docsPath);
    }
    
    return 0;
}
```
This C code does the same as your Go code. It creates an empty file and directory twice: once "here" (in the current working directory) and once in the filesystem root. However, keep in mind that creating files and directories in the root of a filesystem usually requires administrative privileges (superuser rights). The mkdir() function returns 0 on success and -1 on error if it fails due to lack of permissions. Also, fopen() creates an empty file or trunacs an existing one.
