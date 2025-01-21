```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void create_file(const char *filename) {
    FILE *f = fopen(filename, "w");
    if (f == NULL) {
        perror("Error opening file");
        return;
    }
    fclose(f);
    printf("File %s created!\n", filename);
}

void create_dir(const char *dirname) {
    if (mkdir(dirname, 0755) == -1) {
        perror("Error creating directory");
    } else {
        printf("Directory %s created!\n", dirname);
    }
}

int main() {
    create_file("input.txt");
    create_file("/input.txt");
    create_dir("docs");
    create_dir("/docs");
    return 0;
}
```

In this solution, the C program does not have equivalent functions to os.Create and os.Mkdir as in Golang. These operations are handled using standard C libraries. The main function of the program creates files with specific names and directories at various locations (current working directory and filesystem root) using `fopen` for file creation and `mkdir` for directory creation, respectively. Error handling is done with `perror`.
