Sure, here is the equivalent C++ code for your Python task:

```cpp
#include <stdio.h> 
#include <unistd.h> 
#include <sys/stat.h>

void create(const char *directory){
    char buffer[1024];
    sprintf(buffer, "%s/%s", directory, "output.txt");
    int fd = open(buffer, O_WRONLY | O_CREAT| O_TRUNC, S_IRUSR | S_IWUSR);
    if (fd >= 0) {
        close(fd);
    } else {
        perror("open");  // handle error here if you want
    }

    sprintf(buffer, "%s/%s", directory, "docs");
    if(mkdir(buffer, S_IRUSR | S_IWUSR) == 0){
        /* Handle success */
    }else{
        perror("mkdir");  // handle error here if you want
    }
}

int main() {
    create("."); // current directory
    create("/"); // root directory
    return 0;
}
```
Please note that in C++, we can't open a file without creating it first. Hence the `O_TRUNC` flag is used to truncate (delete) the existing file before creating a new one with the same name. Also, you need permission to create directories, so the permissions are given as arguments of `mkdir()`. 
Also note that in C++, there's no built-in way to handle errors like Python’s `os.error` does. We have to do something about it ourselves.
