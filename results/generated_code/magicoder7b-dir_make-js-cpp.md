 Below is the equivalent C++ code for the JavaScript function provided in your problem statement:

```cpp
#include <iostream>
#include <string>
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>

void mkdirp(const std::string& p) {
    DIR *dir;
    dir = opendir (p.c_str());
    if (!dir) {
        int errNum = errno;
        if (errNum == ENOENT) {
            // The directory doesn't exist. Make its parent and try again.
            char* slashPos = strrchr(const_cast<char*>(p.c_str()), '/');
            if (!slashPos) 
                std::cerr << "Invalid path!" << std::endl;
            else {
                mkdirp(std::string(p, 0, slashPos-p.c_str()+1));
                mkdirp(p);
            }
        } else {
            // In the case of any other error, something is borked.
            std::cerr << "Error creating directory: " << strerror(errNum) << std::endl;
        }
    }
}

int main() {
    mkdirp("./path/to/dir"); // Use the function to create a directory
    return 0;
}
```

Please note that this code is for Unix-like systems as C++ does not have a cross-platform standard library for making directories. You would need additional code for Windows systems. Also, keep in mind that this code will only work with absolute paths (paths starting with '/'). If you want to work with relative paths, the function needs to be adjusted accordingly.
