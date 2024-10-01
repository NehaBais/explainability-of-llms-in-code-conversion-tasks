You can convert the JavaScript code to C as follows:
```
#include <stdio.h>

int main() {
    FILE *fp; // pointer to a file object
    char *filename = "input.txt"; // name of the input file
    fp = fopen(filename, "r"); // open the file for reading
    if (fp == NULL) {
        printf("Error: failed to open %s\n", filename);
        return 1;
    }
    printf("File %s exists and is readable.\n", filename);
    fclose(fp); // close the file

    char *directory = "docs"; // name of the directory
    if (access(directory, F_OK) != 0) {
        printf("Error: failed to access %s\n", directory);
        return 1;
    }
    printf("Directory %s exists and is accessible.\n", directory);

    return 0;
}
```
This code uses the `access()` function from `<unistd.h>` header file to check if a file or directory exists, and returns an error code if it does not. The `F_OK` flag specifies that we only want to check for the existence of the file or directory, without trying to access it in any way.

The code also uses `fopen()` function to open the file for reading, and checks if the file is opened successfully by checking if the returned value is NULL. If the file is not opened successfully, an error message is printed and the program exits with a non-zero status code. Otherwise, the program proceeds to print a success message indicating that the file exists and is readable.

The same logic is applied for the directory as well. If the directory does not exist or cannot be accessed, an error message is printed and the program exits with a non-zero status code. Otherwise, the program proceeds to print a success message indicating that the directory exists and is accessible.
