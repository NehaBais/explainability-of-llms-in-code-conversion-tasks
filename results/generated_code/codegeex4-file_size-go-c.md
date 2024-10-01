Below is the equivalent C code for your Golang program. In this, we use the `stat` function to get file status and handle errors in case of failure. We also use the `perror` function to print any error messages.

```c
#include <stdio.h>
#include <sys/stat.h>

void printFileSize(const char *f) {
    struct stat buffer;
    
    if (stat(f, &buffer) == -1){
        perror("Error");
    } else {
        printf("%lld\n", (long long)buffer.st_size);
    }
}

int main() {
    printFileSize("input.txt");
    printFileSize("/input.txt");

    return 0;
}
```

Please replace `printFileSize` with your own function if you have different requirements. Note that `stat.st_size` returns the size of the file in bytes, hence we cast it to a long long for printing.

Before running this C code, please make sure that your file named `input.txt` exists in both current directory and root directory. You can also change the filename in `printFileSize` function call to reflect the name of your file.
