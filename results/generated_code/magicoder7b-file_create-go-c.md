 Below is the equivalent C code for the given Golang code. Note that C doesn't have built-in support for creating directories like Go, so we need to use a library such as `dirent.h` which provides functions for manipulating directories. We also don't directly have the ability to set file permissions in C like we do in Go with the second argument to Mkdir().

```c
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <dirent.h>

void createFile(const char* fn) {
    int fd = open(fn, O_CREAT | O_EXCL, 0666); // Create the file with exclusive access and set permissions to rw-rw-rw
    if (fd == -1){
        printf("Error: %s\n", strerror(errno));
        return;
    }
    
    close(fd); // Close the file after it's been created
    printf("File %s created!\n", fn);
}

void createDir(const char* dn) {
    int result = mkdir(dn, 0755); // Set permissions to rwxr-xr-x (644 in decimal)
    if (result == -1){
        printf("Error: %s\n", strerror(errno));
        return;
    }
    
    printf("Directory %s created!\n", dn);
}

int main() {
    createFile("input.txt");
    createFile("/input.txt");
    createDir("docs");
    createDir("/docs");
    return 0;
}
```

Please note that in C, there is no direct equivalent to Golang's os.Create() function because it doesn't directly create an empty file; rather, the file is opened for writing with exclusive access and then immediately closed again. Also note that the string manipulation and error handling is more manual in C compared to Go, hence a bit more code is needed.
