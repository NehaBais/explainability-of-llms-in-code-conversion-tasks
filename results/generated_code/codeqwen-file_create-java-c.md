The equivalent C code to create an empty file and directory in C is given below:

```c
#include <stdio.h>
#include <sys/stat.h>

int main() {
    // Create an empty file "output.txt" in the current working directory
    FILE *file = fopen("./output.txt", "w");
    if (file == NULL) {
        printf("Error creating file\n");
        return 1;
    }
    fclose(file);

    // Create an empty directory "docs" in the current working directory
    int result = mkdir("./docs", S_IRWXU | S_IRUSR | S_IWUSR | S_IXUSR);
    if (result != 0) {
        printf("Error creating directory\n");
        return 1;
    }

    // Create an empty file "output.txt" in the root directory
    FILE *rootFile = fopen("/output.txt", "w");
    if (rootFile == NULL) {
        printf("Error creating file at root\n");
        return 1;
    }
    fclose(rootFile);

    // Create an empty directory "docs" in the root directory
    result = mkdir("/docs", S_IRWXU | S_IRUSR | S_IWUSR | S_IXUSR);
    if (result != 0) {
        printf("Error creating directory at root\n");
        return 1;
    }

    return 0;
}
```
Please note that in C, file paths must start with a forward slash ("/") to indicate the root directory. Also, the `fopen()` function is used to create an empty file and `mkdir()` function is used to create an empty directory. In both cases, we use "w" or "x" modes as per requirement. The second parameter for mkdir specifies the permissions of the directory.
