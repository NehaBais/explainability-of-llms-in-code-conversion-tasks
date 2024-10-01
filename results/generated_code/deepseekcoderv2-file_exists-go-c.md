## Answer:

```c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void print_stat(char *path) {
    struct stat file_stats;
    
    if (access(path, F_OK) == -1) {
        printf("Error: File or directory not found.\n");
        return;
    }
    
    if (lstat(path, &file_stats) < 0) {
        perror("lstat error");
        exit(EXIT_FAILURE);
    }
    
    if (S_ISDIR(file_stats.st_mode)) {
        printf("%s is a directory\n", path);
    } else {
        printf("%s is a file\n", path);
    }
}

int main() {
    char *input_txt = "input.txt";
    char *root_docs = "/docs";
    
    print_stat(input_txt);
    print_stat("/input.txt");
    print_stat("docs");
    print_stat("/docs");
    
    return 0;
}
```
