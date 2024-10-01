Below is the equivalent C code:

```c
#include <stdio.h>
#include <stdlib.h>

void exit_err(const char *msg, int code) {
    fprintf(stderr, "Error: %s\n", msg);
    exit(code);
}

int main(int argc, char **argv) {
    if(argc == 1){
        exit_err("No file name supplied", 1);
    }
    
    FILE* file = fopen(argv[1], "r");
    if(file == NULL) {
        perror("Error opening file");
        return(2);
    }

    fseek(file, 0L, SEEK_END);
    long size = ftell(file);

    printf("Size of %s is %ld bytes\n", argv[1], size);
    
    fclose(file);
}
```
This code assumes that the filename provided as a command-line argument exists. If not, it will print an error message and return a non-zero value indicating an error. The fseek and ftell functions are used to determine the size of the file in bytes by seeking to the end of the file and then getting the current position from where the seek operation left off.

Please note that the Rust function exit_err provides more helpful information about why there was an error, while the C perror function prints a general message about what went wrong. In this case, we chose to use perror because it's simpler.
