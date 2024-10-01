In C language, the equivalent code would be:

```c
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

void create(char* directory) {
    char output_file[64] = "";
    strcat(output_file, directory);
    strcat(output_file, "/output.txt");

    FILE* fp = fopen(output_file, "w");
    fclose(fp);

    char docs_dir[64] = "";
    strcat(docs_dir, directory);
    strcat(docs_dir, "/docs");
    mkdir(docs_dir, 0777);
}

int main() {
    create("."); // current directory
    create("/"); // root directory
    return 0;
}
```

This code uses `fopen` function to create an empty file with the name "output.txt" in the specified directory, and then it closes the file handle using `fclose`. Then, it creates a new directory with the name "docs". The third argument is the mode for creating the directory.
