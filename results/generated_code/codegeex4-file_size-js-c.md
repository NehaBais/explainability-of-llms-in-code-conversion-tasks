The JavaScript code provided uses the Windows Script Host object model to work with file systems. This is not directly available in C, but we can use the POSIX functions to obtain similar results.

Here's how you can do it:

```C
#include <stdio.h>
#include <sys/stat.h>

int main() {
    struct stat st;
    
    // Get size of 'input.txt' in the current working directory
    if (stat("input.txt", &st) == 0)
        printf("Size of input.txt in current dir: %ld bytes\n", st.st_size);
    else
        perror("Error getting file size");

    // Get size of 'input.txt' in the root directory
    if (stat("/input.txt", &st) == 0)
        printf("Size of input.txt in root: %ld bytes\n", st.st_size);
    else
        perror("Error getting file size");
        
    return 0;
}
```
This program will display the sizes of 'input.txt' files located in both the current working directory and the root directory. The `stat` function fills in the `st_size` field with the file size on success, and it is defined in the header file `<sys/stat.h>`. Note that this code works on Unix-like systems like Linux or macOS. For Windows, you would need to use a different API.

Remember to compile your C code before running it. You can do so using GCC with `gcc -o outputfile outputfile.c` command, where `outputfile.c` is the name of your file and `outputfile` is the name of the compiled program. Then run the resulting binary.
