Below is the equivalent C++ code for the Golang function provided. 

```cpp
#include <iostream>
#include <sys/stat.h>

void printStat(const char* path) {
    struct stat s;

    if (stat(path, &s) == 0) {
        if (s.st_mode & S_IFDIR) {
            std::cout << path << " is a directory" << std::endl;
        } else if (s.st_mode & S_IFREG){
            std::cout << path << " is a file" << std::endl;
        } else {
            std::cout << path << " exists but it's not a regular file or directory" << std::endl;
        }  
    } else {
        perror("stat() error\n");
    }
} 

int main(){
   printStat("input.txt");
   printStat("/input.txt");
   printStat("docs");
   printStat("/docs");
  return 0;
}
```

This C++ code uses the `stat()` function from sys/stat.h to get information about a file or directory specified by path.
If stat is successful, it checks whether the last operation resulted in a regular file (S_IFREG) or a directory (S_IFDIR). If neither condition is met, it means that the path exists but it's not a regular file or directory.
If `stat()` fails to get information about the provided path, then perror() function outputs an error message with a description of the last system call error.
