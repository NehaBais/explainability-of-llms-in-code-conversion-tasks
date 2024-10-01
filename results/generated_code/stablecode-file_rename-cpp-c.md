Below is the converted code from C++ to C:

```c
#include <stdio.h>
#include <string.h>

int renameFile(char *currentPath, char *fileToRename) {
    char command[200];

    // Construct the rename command
    strcpy(command, "mv ");
    strcat(command, currentPath);
    strcat(command, " ");
    strcat(command, fileToRename);
    strcat(command, ".txt output.txt");

    // Execute the rename command
    if (system(command)) {
        printf("Error renaming file.\n");
        return 1;
    }

    return 0;
}

int main() {
    char currentPath[] = "here";
    char fileToRename1[] = "input.txt";
    char fileToRename2[] = "docs";
    char fileToRename3[] = "mydocs";

    // Rename the first directory and file
    if (renameFile(currentPath, fileToRename1)))) {
        printf("Error renaming file.\n");
        return 1;
    }

    // Rename the second directory and file
    if (renameFile(fileToRename1, fileToRename2)))) {
        printf("Error renaming file.\n");
        return 1;
    }

    // Rename the third directory and file
    if (renameFile(currentPath, fileToRename3)))) {
        printf("Error renaming file.\n");
        return 1;
    }

    // Rename the fourth directory and file
    if (renameFile("/", fileToRename2)))) {
        printf("Error renaming file.\n");
        return 1;
    }

    printf("Files renamed successfully.\n");
    return 0;
}
```
This is a conversion of the original C++ code to C. The code will rename: a file called input.txt into output.txt and a directory called docs into mydocs. This process will be repeated twice, once in the current working directory and again in the root filesystem directory. The provided code assumes that the user has the necessary permissions to perform these operations.
