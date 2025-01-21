 Certainly! Below is the equivalent C code to verify that a file called `input.txt` and a directory called `docs` exist, both for the current working directory and the filesystem root. This example uses POSIX-compatible functions in C to check for the existence of files and directories.

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

int file_exists(const char *filename) {
    struct stat buffer;
    return (stat(filename, &buffer) == 0);
}

void check_files() {
    // Check for the current working directory
    if (file_exists("docs/input.txt")) {
        printf("File docs/input.txt exists in the current working directory.\n");
    } else {
        printf("File docs/input.txt does not exist in the current working directory.\n");
    }

    // Check for the filesystem root
    if (file_exists("/docs/input.txt")) {
        printf("File /docs/input.txt exists at the filesystem root.\n");
    } else {
        printf("File /docs/input.txt does not exist at the filesystem root.\n");
    }
}

int main() {
    check_files();
    return 0;
}
```

### Explanation:
1. **file_exists Function**: This function takes a filename as input and uses `stat` to check if the file exists. It returns `1` if the file exists and `0` otherwise.
2. **check_files Function**: This function calls `file_exists` for both the current working directory (`docs/input.txt`) and the filesystem root (`/docs/input.txt`), printing appropriate messages based on whether the files exist or not.
3. **main Function**: The main function simply calls `check_files`.

### Usage:
To compile and run this C code, you can use a command line like the following (assuming you have a POSIX-compatible system):

gcc -o check_files check_files.c
./check_files


This will output whether the files exist in their respective locations.
