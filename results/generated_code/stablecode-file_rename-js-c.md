Converting the provided JavaScript code to C isn't straightforward because JS and C are fundamentally different languages, with different sets of libraries and features available. 

The given code is manipulating files and directories in a Windows environment using ActiveXObject. This kind of file manipulation does not have direct analogs in C, especially without relying on platform-specific APIs (like the Windows API for moving files/folders).

Here's how you might structure such a program in C:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <unistd.h>

void renameFile(char *currentPath, char *newName) {
    char command[200];
    sprintf(command, "mv %s %s", currentPath, newName);
    system(command);
}

void moveFolder(char *currentPath, char *newPath) {
    char command[200];
    sprintf(command, "mv %s %s", currentPath, newPath);
    system(command);
}

int main() {
    renameFile("input.txt", "output.txt");
    moveFolder("docs", "mydocs");

    return 0;
}
```
Please note that this C code is assuming a *nix based operating system (like Linux, MacOS etc.), because some of the required C libraries like dirent.h doesn't exist in Windows API.

Also, keep in mind again that this conversion might not work on all systems or for all uses. You may need to make changes to suit your specific needs and environment.
