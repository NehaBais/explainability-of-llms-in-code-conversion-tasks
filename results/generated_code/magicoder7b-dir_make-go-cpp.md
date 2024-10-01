 Below is the equivalent C++ code for creating a directory and any missing parent directories:

```cpp
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string>

int mkdir_p(const char* dir) {
    struct stat st;
    
    if (stat(dir, &st) == 0 && S_ISDIR(st.st_mode))
        return 0; // directory already exists
        
    size_t len = strlen(dir);
    while (1 < len && dir[len - 1] != '/') --len;
    
    char* parentDir = new char[len];
    std::strncpy(parentDir, dir, len);
    parentDir[len] = '\0'; // terminating null character
    
    int result = mkdir_p(parentDir);
    delete[] parentDir;
    
    if (result != 0) {
        return result; // creation of parent directory failed
    }
        
    errno = 0;
    if (mkdir(dir, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) == 0) {
        return 0; // directory created successfully
    } else {
        return -1; // failed to create directory
    }
}
```
This code is a recursive function that first checks if the target directory exists and, if it does not exist, attempts to recursively create all parent directories until the current working directory. It then attempts to create the target directory itself. If any of these operations fail, the function returns -1; otherwise, it returns 0 indicating successful creation. Note that this code requires write permissions on all parent directories and may raise a system call error if one or more parent directories already exists but is inaccessible due to permissions. It also uses S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH for mode, which means that the directory will be created with read and write access for owner (user), read and execute access for group, and read and execute access for others. You can adjust this according to your needs.
