```c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>

void file_exists(const char* path) {
    printf("%s", path);
    struct stat st;
    if (stat(path, &st) == 0) {
        if (S_ISDIR(st.st_mode)) {
            printf(" is a directory\n");
        } else {
            printf(" exists with a file size of %ld bytes.\n", st.st_size);
        }
    } else {
        printf(" does not exist\n");
    }
}

int main() {
	file_exists("input.txt");
	file_exists("zero_length.txt");
	file_exists("docs/input.txt");
	file_exists("docs/zero_length.txt");
}
```

