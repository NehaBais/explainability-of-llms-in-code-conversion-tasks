Below is the equivalent C code for the Python script above:
```c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void create(char *directory) {
    FILE* fp = fopen("output.txt", "w+");
    fclose(fp);
    remove("output.txt"); // This will remove the file created by above line as it is empty and we don't need to write anything in it. 
    chdir(directory);  // Change directory to specified path
    mkdir("docs", 0700);   // Create an empty directory named "docs" with read/write permission for the owner only
    remove("docs"); // This will remove the directory created by above line as it is empty and we don't need to write anything in it.  
}

int main() {
    create(".");  // current directory
    create("/");  // root directory 
    return 0;
}
```
Please note that unlike Python, C does not have built-in support for creating empty files. Therefore the file "output.txt" is created and immediately removed. The same thing happens with directories - they are created then immediately removed. This is done in order to achieve zero size as requested by the original task. 

Also note that error checking (like checking if fopen, chdir or mkdir were successful) has been omitted for brevity but should be included in a real-world program.
