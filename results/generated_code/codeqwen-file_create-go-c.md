The given Golang code creates an empty file named "input.txt" in the current working directory and also an empty directory named "docs". Then it does the same for the root filesystem, using "/input.txt" and "/docs" respectively.

In C, you would create an empty file with open() function and a directory with mkdir() function. Here's how you could write this in C:

```c
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

void createFile(char* fn) {
    FILE *f = fopen(fn, "w");
    if (f == NULL) {
        perror("Error creating file");
        return;
    }
    printf("file %s created!\n", fn);
    fclose(f);
}

void createDir(char* dn) {
    if (mkdir(dn, 0777) < 0) {
        perror("Error creating directory");
        return;
    }
    printf("directory %s created!\n", dn);
}

int main() {
    createFile("input.txt");
    createFile("/input.txt");
    createDir("docs");
    createDir("/docs");
    
    return 0;
}
```

Note that the function `perror()` is used to print an error message along with the standard error number. The modes for file and directory creation are different in C, so you may have to adjust the permissions accordingly. Also, paths are specified without "/" at the beginning unlike Go, as "/" is a valid character in directory names in Unix-like operating systems.
