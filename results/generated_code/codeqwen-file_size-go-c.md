The equivalent code in C is as follows:

```C
#include <stdio.h>
#include <sys/stat.h>

void printFileSize(char* f) {
    struct stat st;
    if (stat(f, &st) == -1) {
        perror("Error getting file size");
    } else {
        printf("%ld\n", st.st_size);
    }
}

int main() {
    printFileSize("input.txt");
    printFileSize("/input.txt");
    return 0;
}
```

In this C code, the `stat` function retrieves information about a file. If the function is successful, it returns 0 and updates the structure pointed to by its second argument with the requested information. Otherwise, it returns -1 and sets the global variable errno. This error message can be obtained using perror("Error getting file size") call.
