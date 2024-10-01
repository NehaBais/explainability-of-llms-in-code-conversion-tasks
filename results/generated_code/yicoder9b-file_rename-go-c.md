Below is the equivalent C code for the provided Golang script: 

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
  if(rename("input.txt", "output.txt") == 0){
    printf("File renamed successfully\n");
  }else{
    perror("Error in file renaming");
  }

  if(rename("docs", "mydocs") == 0){
    printf("Directory renamed successfully\n");
  }else{
    perror("Error in directory renaming");
  }

  // for the filesystem root we need full path:
  if(rename("/input.txt", "/output.txt") == 0){
    printf("File renamed successfully\n");
  }else{
    perror("Error in file renaming");
  }

  if(rename("/docs", "/mydocs") == 0){
    printf("Directory renamed successfully\n");
  }else{
    perror("Error in directory renaming");
  }

  return 0;
}
```

Remember that to compile this C code you'll need a C99-compliant compiler, as the `rename()` function is defined in the C99 standard. You can compile it with `gcc -std=c99 file_renamer.c -o file_renamer`.

This script tries to rename files and directories "input.txt" to "output.txt" and "docs" to "mydocs" both in the current working directory and in the filesystem root. If it is successful, it prints a success message; if not, it reports an error message with `perror()`.

Keep in mind that `rename` only works within one file system and will not work across different partitions or file systems because the rename() function is not atomic operation i.e., it may fail after partially renaming files/directories.
