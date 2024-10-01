 Below is the equivalent C code for creating an empty file and an empty directory:

```c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <dirent.h>
#include <string.h>

void create(const char* directory) {
    // Create an empty file in the current directory
    FILE *f = fopen("output.txt", "w");
    if (f == NULL) {
        printf("Error creating output.txt\n");
        exit(1);
    }
    fclose(f);

    // Create an empty directory in the current directory
    int result = mkdir("docs", 0755);
    if (result != 0) {
        printf("Error creating docs directory\n");
        exit(1);
    }
    
    // Change directories to root and repeat the same operation
    chdir("/");
    f = fopen("output.txt", "w");
    if (f == NULL) {
        printf("Error creating output.txt in root directory\n");
        exit(1);
    }
    fclose(f);
    
    result = mkdir("docs", 0755);
    if (result != 0) {
        printf("Error creating docs directory in root directory\n");
        exit(1);
    }
}

int main() {
    create("."); // current directory
    return 0;
}
```
