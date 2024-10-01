The equivalent C code for the given C++ code would be as follows:

```c
#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>

void file_exists(const char *path) 
{
    struct stat st;

    if (stat(path, &st)) {
        printf("%s does not exist\n", path);
    } else {
        if (st.mode & S_IFDIR)) {
            printf("%s is a directory\n", path);
        } else {
            printf("%s exists with a file size of %ld bytes.\n", 
                           path, st.st_size);
        }
    }
}

int main() 
{
    file_exists("input.txt");
    file_exists("zero_length.txt");
    file_exists("docs/input.txt");
    file_exists("docs/zero_length.txt");

    return 0;
}
```

This code checks if a file called input.txt and a directory called docs exist in the current working directory and its subdirectories. It prints out information about each file, including whether it is a directory or not, and its size in bytes.
