Below is the equivalent C code for your Java program. Please note that to rename a file or directory in a different location you need provide full path instead of just relative path. Also, error checking and proper handling are not provided here as it would increase complexity. It's assumed that those are present in your application.

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    char oldname1[] = "input.txt";
    char newname1[] = "output.txt";
    
    if (rename(oldname1, newname1) != 0) 
        printf("The file %s could not be renamed into %s.\n", oldname1, newname1);
    else 
        printf("The file %s was renamed as %s.\n", oldname1, newname1);
    
  
    char oldname2[] = "docs";
    char newname2[] = "mydocs";

    if (rename(oldname2, newname2) != 0) 
        printf("The directory %s could not be renamed into %s.\n", oldname2, newname2);
    else 
        printf("The directory %s was renamed as %s.\n", oldname2, newname2);
    
    return 0;
}
```

Please note that in C, the "file" and "directory" terms are used interchangeably. The program renames a file or directory to another name by using the rename() function provided by your standard library. It returns 0 if successful otherwise -1 (which can be interpreted as error). You should replace the 'docs' and 'input.txt' with actual paths in case they are not located at root of current working directory.

