```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main() {
    char input_file[] = "input.txt";
    char output_file[] = "output.txt";
    char docs_dir[] = "docs";
    char mydocs_dir[] = "mydocs";

    // Rename file locally
    if (rename(input_file, output_file) != 0) {
        perror("Error renaming input.txt to output.txt");
        exit(1);
    }

    // Create directory in local filesystem
    if (mkdir(mydocs_dir, 0755) == -1) {
        perror("Error creating mydocs directory");
        exit(1);
    }

    // Move file into created directory
    char docs_path[strlen(docs_dir) + strlen("/") + strlen(mydocs_dir)];
    strcpy(docs_path, docs_dir);
    strcat(docs_path, "/");
    strcat(docs_path, mydocs_dir);
    if (rename(input_file, docs_path) != 0) {
        perror("Error moving input.txt to /mydocs directory");
        exit(1);
    }

    // Rename file in root filesystem
    char root_output[] = "/output.txt";
    if (rename(input_file, root_output) != 0) {
        perror("Error renaming input.txt to /output.txt");
        exit(1);
    }

    // Rename directory in root filesystem
    char root_mydocs[] = "/mydocs";
    if (rename(docs_dir, root_mydocs) != 0) {
        perror("Error renaming docs directory to /mydocs");
        exit(1);
    }
}
```