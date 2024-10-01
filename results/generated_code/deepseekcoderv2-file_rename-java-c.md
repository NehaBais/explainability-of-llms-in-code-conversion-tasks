Answer: The code below is the C equivalent of the given java program, and it should be run on a POSIX-compliant operating system:
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
int rename_file(char *oldname, char *newname) {
    struct stat sb;
    int result = 0;
    // check if file exists and is a regular file or directory
    if (lstat(oldname, &sb) == 0 && S_ISREG(sb.st_mode)) {
        char *newname2 = malloc((strlen(newname)+1)*sizeof(char));
        strcpy(newname2, newname);
        if (newname2[0] != '/')
            neewname2 = malloc(strlen(getcwd())+strlen(newname2)+2);
        sprintf(newname2, "%s/%s", getcwd(), newname2); // append path to cwd
        if (rename(oldname, newname) == 0) {
            printf("File renamed successfully.\n");
            result = 1;
        } else {
            perror("Error renaming file: ");
        }
    }
    return result;
}
int main() {
    rename_file("./input.txt", "./output.txt");
    rename_file("/docs/input.txt", "/docs/output.txt");
    char dirpath[256];
    getcwd(dirpath, 256);
    strcat(dirpath, "mydocs/");
    if (mkdir("mydocs", S_IRWXU | S_IRGRP) != -1) { // create directory if it doesn't exist already and assign permissions accordingly
        chdir("mydocs");
        rename_file("./input.txt", "./output.txt");
        chdir("..");
    }
}
```
