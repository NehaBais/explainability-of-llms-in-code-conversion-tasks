### Answer:
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>

int main() {
    // Check if the current directory has a file named "output.txt"
    char path[FILENAME_MAX];
    getcwd(path, FILENAME_MAX);
    strcat(path, "/output.txt");
    int f = access(path, F_OK);
    if (f == 0) {
        printf("File already exists\n");
        return -1; // Exit the program with an error code
    }

    // Create a directory named "docs" in the current working directory
    mkdir("docs", S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
    
    // Open/Create a file named "output.txt" in the "docs" directory
    FILE *fp = fopen("docs/output.txt", "w");
    if (fp == NULL) {
        printf("Error creating file\n");
        return -1; // Exit the program with an error code
    }
    
    fclose(fp);
    return 0;
}
```
