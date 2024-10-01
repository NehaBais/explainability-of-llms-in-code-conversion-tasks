 Below is the C code equivalent to your Python code:

```C
#include <stdio.h>
#include <unistd.h>  // for rename() function

int main(){
    int result;

    //Renaming "input.txt" into "output.txt" in the current working directory
    result = rename("input.txt", "output.txt");
    if (result != 0) {
        printf("Error occurred while renaming file\n");
    }

    //Renaming "docs" into "mydocs" in the current working directory
    result = rename("docs", "mydocs");
    if (result != 0) {
        printf("Error occurred while renaming directory\n");
    }
    
    //Renaming "/input.txt" into "/output.txt"
    result = rename("/input.txt", "/output.txt");
    if (result != 0) {
        printf("Error occurred while renaming file in the root filesystem\n");
    }

    //Renaming "/docs" into "/mydocs"
    result = rename("/docs", "/mydocs");
    if (result != 0) {
        printf("Error occurred while renaming directory in the root filesystem\n");
    }
    
    return 0;
}
```
The `rename()` function is used to change the name or location of a file, but it doesn't work on directories. For that, you could use the `mv` command if you're using Unix/Linux, or `MoveFileEx` with the `MOVEFILE_REPLACE_EXISTING` flag if you're using Windows and C.

It's important to note that this code must be run as root (or administrator on Windows) because renaming directories requires access to the filesystem metadata which is normally restricted for security reasons. It might also fail if one or both of the paths do not exist.
