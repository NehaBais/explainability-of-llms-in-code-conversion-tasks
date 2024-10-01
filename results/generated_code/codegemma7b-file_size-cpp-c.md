```c
#include <sys/stat.h>
#include <stdio.h>

void print_file_size(const char* filename) {
    struct stat sb;
    if (stat(filename, &sb) == 0) {
        printf("Size of file %s is %ld bytes.\n", filename, sb.st_size);
    } else {
        perror("stat");
    }
}

int main() {
    print_file_size("input.txt");
    print_file_size("/input.txt");
}
```
