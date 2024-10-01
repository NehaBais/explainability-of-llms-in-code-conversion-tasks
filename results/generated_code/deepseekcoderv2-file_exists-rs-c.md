### Solution 1:
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char* files[] = {"input.txt", "docs", "/input.txt", "/docs"};
    for (int i = 0; i < sizeof(files) / sizeof(files[0]); i++) {
        FILE* file = fopen(files[i], "r");
        if (file == NULL) {
            printf("%s does not exist\n", files[i]);
        } else {
            fseek(file, 0, SEEK_END);
            long size = ftell(file);
            rewind(file);
            char* content = malloc(size + 1);
            if (content == NULL) {
                printf("Could not allocate memory for %s\n", files[i]);
            } else {
                fread(content, sizeof(char), size, file);
                content[size] = '\0';
                printf("%s is a file with the contents \"%s\"\n", files[i], content);
                free(content);
            }
        }
    }
    return 0;
}
```

