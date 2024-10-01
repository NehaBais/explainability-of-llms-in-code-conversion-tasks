To convert the given Python code to C, we need to perform the following steps:

1. Importing necessary libraries: In C, we use header files for importing libraries. For this task, we will import the `stdio.h` header file for reading and writing to files and the `stdlib.h` header file for creating directories.
2. Defining the `create()` function: The `create()` function takes a directory path as an argument and creates a new empty file called "output.txt" of size 0 bytes in that directory, and an empty directory called "docs". We will use the `fopen()` function from the `stdio.h` header file to create a new file with write permissions and the `mkdir()` function from the `stdlib.h` header file to create a new directory.
3. Calling the `create()` function twice: In the Python code, the `create()` function is called twice, once with ".", which represents the current working directory, and once with "/", which represents the root directory. We will call the `create()` function twice in C as well, passing the appropriate directory paths as arguments.
4. Using the correct file modes: In Python, we use "w" as the mode for creating a new file with write permissions. In C, we can use the `O_WRONLY` flag for writing to a file and the `O_CREAT` flag for creating a new file. We will also need to specify the correct permissions for the file using the `chmod()` function from the `sys/stat.h` header file.
5. Using the correct directory separator: In Python, we use the "/" character as the directory separator. In C, we can use the `PATH_SEPARATOR` macro from the `stdlib.h` header file to get the appropriate directory separator for the current platform.

Here is the converted C code:
```c
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

void create(char* directory) {
    char* filename = "output.txt";
    FILE* fp;
    struct stat sb;

    // Create a new file with write permissions and the correct permissions for the file
    if ((fp = fopen(directory, filename, "w")) == NULL) {
        perror("fopen");
        return;
    }
    chmod(fp, S_IRUSR | S_IWUSR);

    // Create a new directory for the output file
    if (mkdir(directory, 0755) < 0) {
        perror("mkdir");
        return;
    }
}

int main() {
    create(".", "output.txt"); // current working directory
    create("/", "docs"); // root directory
    return 0;
}
```
Note that the `chmod()` function is used to set the correct permissions for the file, and the `mkdir()` function is used to create a new directory with the appropriate permissions. The `FILE* fp` variable is used to store the file descriptor returned by the `fopen()` function, which is then passed to the `chmod()` function to set the correct permissions for the file. The `struct stat sb` variable is used to store information about the file or directory, and the `sb.st_mode` field is used to get the current permissions for the file.
