Below is the equivalent C code for your Python script:

```C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#ifdef _WIN32
    #include <windows.h>
#else
    #include <unistd.h>
    #define MAX_PATH _MAX_PATH
#endif

void create(const char* directory) {
    char fullPath[MAX_PATH];

    snprintf(fullPath, sizeof(fullPath), "%s\\output.txt", directory);
    FILE * outputFile = fopen(fullPath, "w"));
    if (!outputFile) {
        perror("Unable to open file");
        exit(1);
    }

    snprintf(fullPath, sizeof(fullPath), "%s\\docs", directory);
    mkdir(fullPath, 0777);
    if (errno != 0) {
        perror("Error while creating directory");
        exit(1);
    }

    fclose(outputFile);
}

int main() {
    create("."); // current directory
    create("/"); // root directory
    return 0;
}
```
This C code does the same thing as your Python script. It creates an "output.txt" file and a "docs" directory in the provided directory. If any of these operations fail, it will print out an error message and exit with a status of 1.

Please note that:
- This code is platform dependent because Windows handles paths differently than Unix/Linux based operating systems.
- You need to compile this code using a C compiler (like GCC) before you can run the resulting executable file.
- The maximum path length for files and directories in this code is defined by the `MAX_PATH` constant, which is different from the `PATH_MAX` constant that defines the maximum length of a path string in Unix/Linux based operating systems.
