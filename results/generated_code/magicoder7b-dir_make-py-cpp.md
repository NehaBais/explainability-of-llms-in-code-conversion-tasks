 Below is the equivalent C++ code for creating a directory and any missing parent directories:

```cpp
#include <iostream>
#include <cstring>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>

void mkdirp(const char* path) {
    DIR* dir;
    std::size_t len = strlen(path);
    const char* p = &path[0];
    
    while (1) {
        if ((dir=opendir(p)) != NULL) {
            closedir(dir);
            break;  // path exists
        } else {
            int err = errno;   // save the error code for the next loop iteration
            
            if (err == ENOENT) {  // no such dir or file exists, try creating it.
                int result = mkdir(p, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);   // create the missing directory(s)
                
                if (result == 0 || errno == EEXIST) {    // successfully created or already exists.
                    break;
                } else {
                    std::cerr << "Could not create directory: " << strerror(err);   // error creating the directories.
                    exit(-1);
                }
            } else {
                std::cerr << "Could not access directory: " << strerror(err);  // other dir or file related issue.
                exit(-1);
            }
        }
        
        if (len-- == 0) break;   // end of path component reached.
        p = &path[0] + len + 1;  // move to the next directory/component in the path.
    }
}
```
This function can create a new directory or several missing directories. If the directory already exists, it will simply break and return successfully. It is also cross-platform as it uses POSIX system calls which are available on Unix-like systems such as Linux, MacOS and BSDs.
