C doesn't have a built-in filesystem manipulation library like ActiveXObject in JavaScript. But we can achieve the same result using C standard library and POSIX interfaces. Here is how you might do it:

For renaming files, the `rename()` function from stdio (stdio.h) could be used. It's available on Unix-based systems and Windows as well with Cygwin or MinGW.
The `rename()` function takes two parameters - the old name and new name of the file. If it succeeds, it returns 0; if it fails, it returns non-zero.

```c
#include <stdio.h>

int main() {
    if (rename("input.txt", "output.txt") == 0){
        printf("File rename successful\n");
    } else {
        printf("Error in renaming the file\n");
    }
  
   // for root directory:
    if (rename("c:/input.txt", "c:/output.txt") == 0){
        printf("File rename successful\n");
    } else {
        printf("Error in renaming the file\n");
    }
  
   // For directories:
   if (rename("docs", "mydocs") == 0){
       printf("Directory rename successful\n");
   } else {
       printf("Error in renaming the directory\n");
   }
    
   // for root directory:
    if (rename("c:/docs", "c:/mydocs") == 0){
        printf("Directory rename successful\n");
    } else {
        printf("Error in renaming the directory\n");
    }
  return 0;
}
```
Please note that you need appropriate permissions to carry out such operations.
