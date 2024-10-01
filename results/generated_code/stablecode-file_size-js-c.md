In C language there is no direct equivalent to `ActiveXObject` in JavaScript, as the two technologies are vastly different and serve very distinct purposes in web development. 

Moreover, C doesn't support objects directly like JavaScript. So we will need some kind of structure or class to represent the files in our code.

Here's a rough conversion:

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    long size;
} FileInfo;


int main() {
    // Create an instance of the filesystem object
    const char *fileName1 = "input.txt";
    const char *fileName2 = "c:/input.txt";

    FileInfo files[2];

    // Populate the array with file information for each file 
    strcpy(files[0].name, fileName1);
    files[0].size = -1; // Set initial size to an unknown value
    strcpy(files[1].name, fileName2);
    files[1].size = -1; // Set initial size to an unknown value

    // Verify the size of each file
    if (access(fileName1, F_OK) != -1 && access(fileName2, F_OK) != -1) {
        files[0].size = -1; // Reset size for file 1 
        files[1].size = -1; // Reset size for file 2 

        if (fso->GetFile(files[0].name).Size && fso->GetFile(files[1].name)).Size) {
            printf("The size of %s is %ld\n", files[0].name, files[0].size);
            printf("The size of %s is %ld\n", files[1].name, files[1].size);
        } else {
            printf("Unable to access the file %s or %s\n", files[0].name, files[1].name);
        }
    } else {
        printf("One or both of the files %s and %s do not exist in the current working directory or on the root of the file system.\n", files[0].name, files[1].name);
    }

    return 0;
}
```
Note: This code assumes that you have a valid C compiler installed on your machine.
