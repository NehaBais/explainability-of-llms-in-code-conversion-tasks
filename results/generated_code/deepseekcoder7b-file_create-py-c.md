The equivalent C code for the Python script you provided would look something like this. It uses standard library functions from C's `stdio.h` and `direct.h` to create files and directories respectively. Note that in C, there is no direct method of creating a directory relative to an existing one like we do with "." or "/" in Python, so we must use `mkdir()` function with absolute path instead. Also remember to handle errors properly when working with file IO operations in real-world applications.
```c
#include <stdio.h>
#include <direct.h>

void create(const char* directory) {
    FILE *file;
    // Create an empty text file "output.txt"
    if (fopen_s(&file, ".\\output.txt", "w") == 0) {
        fclose(file);
    }
    else {
        printf("Failed to create output.txt"); 
    }
    // Create an empty directory "docs"
    if (_mkdir(".\\docs") != 0) {
        printf("Failed to create docs directory");
    }
}

int main() {
    create(".");  // current directory
    create("C:\\");  // root directory, must use absolute path in Windows
  
    return 0;
}
```
The `fopen_s()` function is used to open a file. If the function returns zero, it indicates that the file was opened successfully and we can then close it with the `fclose()` function. The string ".\\output.txt" represents a file path starting from the current directory (.), followed by output.txt.

The `_mkdir()` function is used to create a new directory in the specified path, here ".\\docs". Note that C does not have an equivalent of Python's "/" or "." for specifying the current working directory and root filesystem paths - you must use absolute filepaths instead. On Windows, it might be something like `C:\\` to represent the root of your drive (or just `.\\` to represent the current directory).

