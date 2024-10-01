Here's the equivalent C code that meets the requirements:
```
#include 
#include 
int main() {
    char* filenames[] = {"input.txt", "docs", "/input.txt", "/docs"};
    int i;
    for (i = 0; i < sizeof(filenames)/sizeof(char*); i++) {
        struct stat info;
        if (stat(filenames[i], &info) == 0) {
            if (S_ISDIR(info.st_mode)) {
                printf("%s is a directory\n", filenames[i]);
            } else {
                printf("%s is a file\n", filenames[i]);
            }
        } else {
            printf("%s does not exist\n", filenames[i]);
        }
    }
    return 0;
}
```
Note that in C, we use the `struct stat` type to store information about a file or directory. We also need to link against the `libstat` library to access the `stat()` function. Additionally, we use the `S_ISDIR()` macro to check if a file is a directory or not.

