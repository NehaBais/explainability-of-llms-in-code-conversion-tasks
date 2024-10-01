Sure! Here's the C version of the code:
```
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <file_name>\n", argv[0]);
        exit(1);
    }

    // Get the file name from the command line arguments
    char *file_name = argv[1];

    // Get the metadata of the file
    struct stat st;
    if (stat(file_name, &st) == -1) {
        perror("stat");
        exit(2);
    }

    // Print the size of the file
    printf("Size of %s is %ld bytes\n", file_name, st.st_size);

    return 0;
}
```
Here's a breakdown of the changes:

* The `env` module in Rust has been replaced with the C standard library functions for getting command line arguments and environment variables.
* The `fs` module has been replaced with the `stat` function in C to get the metadata of a file.
* The `process` module has been replaced with the `exit` function in C to exit the program.
* The `io` module has been replaced with the `printf` and `perror` functions in C to print to stdout and stderr, respectively.
* The `Display` trait has been replaced with the `fprintf` function in C to print a message to stdout.
* The `unwrap_or_else` method has been replaced with an if-statement to check the number of command line arguments.
* The `exit_err` function has been removed entirely, as it is not needed in C.
