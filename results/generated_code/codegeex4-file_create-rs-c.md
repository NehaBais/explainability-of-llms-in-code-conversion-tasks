In C language, the equivalent functionality can be achieved using the stdio and sys/stat libraries. The following is an example of how you would do this:

```c
#include <stdio.h>
#include <sys/stat.h>

const char* FILE_NAME = "output.txt";
const char* DIR_NAME = "docs";

void create(const char *root) {
    char file_path[100], dir_path[100];
    
    sprintf(file_path, "%s/%s", root, FILE_NAME);
    sprintf(dir_path, "%s/%s", root, DIR_NAME);

    if(mkdir(dir_path, 0777) != 0)
        perror("Error creating directory");
        
    FILE *fp = fopen(file_path, "w");
    
    if(fp == NULL)
        perror("Error creating file");

    fclose(fp);
}

int main() {
    create(".");
    create("/");
    
    return 0;
}
```

Here we use `sprintf` to generate the full paths of both the directory and the file within the given root. Note that this code does not check for errors in creating the directories or files, and it does not clean up if one operation fails. Additionally, the "docs" directory is created with permissions 0777 (read/write/execute by everyone), which may be more permissive than you want.

The `mkdir` function creates a new directory, and `fopen` (with "w" mode) creates a new empty file if it does not already exist. Note that the "root" parameter is passed as a C string, so this function will not work correctly on Windows unless you change the paths to use "/" instead of "\", or adjust your compiler settings for handling Windows-style path separators.

Also note that running `mkdir("/docs")` (or any other command that creates directories) typically requires root permissions. You may need to run your C program with `sudo` or otherwise obtain the necessary privileges if you encounter permission errors when trying to create a directory in the filesystem root.
