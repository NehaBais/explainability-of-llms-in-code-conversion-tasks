The following is a direct translation of the Python code to C. Note that unlike python's `os.rename()` function which can work with both files and directories, the `rename()` function in C works only for files. For renaming directories we need to use `mkdir()` function from dirent.h library:
```c
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main() {
    if (rename("input.txt", "output.txt") == 0){
        printf("File renamed successfully\n");
    } else {
        printf("Failed to rename file\n");
    }
  
    //For directories:
    DIR* dir = opendir ("./"); // open current directory
    struct dirent *entry; 
    while ((entry = readdir (dir)) != NULL) {
        if(strcmp(entry->d_name, "docs") == 0){
            rename("docs", "mydocs");  // rename the directory
        }
    }
    closedir (dir);

    char cwd[1024];
    getcwd(cwd, sizeof(cwd)); // get current working directory path
    chdir("/");   // change directory to root
  
    if (rename(cwd, "input.txt") == 0){
        printf("File renamed successfully\n");
    } else {
        printf("Failed to rename file in the root directory\n");
    }

    dir = opendir ("/"); // open root directory
    while ((entry = readdir (dir)) != NULL) {
        if(strcmp(entry->d_name, "docs") == 0){
            rename(cwd, "mydocs");  // rename the directory in root
        }
    }
    closedir (dir);
    chdir(cwd);   // change back to original working directory

    return 0;
}
```
Please note this code assumes that files or directories exist and user has the appropriate permissions. Error checking is minimal for brevity.
