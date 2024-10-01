In C, you can use the `stat` function to check if a file or directory exists. Here is the equivalent code in C for your Python script:

Checking current working directory and a file in root filesystem:

```c
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
 
int main() {
    struct stat st;
   
    // Check file "input.txt" in current working directory
    if (stat("input.txt", &st) == 0 && S_ISREG(st.st_mode)){
        printf("File input.txt exists in the current directory\n");  
    } else {
        printf("File input.txt does not exist in the current directory \n");
    }
   
    // Check file "/input.txt" at root directory
    if (stat("/input.txt", &st) == 0 && S_ISREG(st.st_mode)) {
        printf("File /input.txt exists in the root filesystem\n");  
    } else {
        printf("File /input.txt does not exist in the root filesystem \n");
    }
   
    // Check directory "docs" in current working directory 
    if (stat("docs", &st) == 0 && S_ISDIR(st.st_mode)) {  
        printf("Directory docs exists in the current directory\n");  
    } else {
        printf("Directory docs does not exist in the current directory \n");
    }
   
    // Check directory "/docs" at root directory 
    if (stat("/docs", &st) == 0 && S_ISDIR(st.st_mode)) {  
        printf("Directory /docs exists in the root filesystem\n");  
    } else {
        printf("Directory /docs does not exist in the root filesystem \n");
    }   
    return 0;
}
```
Compile and run this code to verify if a file or directory exists.
