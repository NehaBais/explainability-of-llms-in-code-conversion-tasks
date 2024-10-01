 The equivalent C++ code would be:

```cpp
#include <iostream>
#include <sys/stat.h>

bool exists(const char* path) {
    struct stat buffer;
    return (stat (path, &buffer) == 0);
}

int main() {
    const std::string files[] = {"input.txt", "docs", "/input.txt", "/docs"};
    
    for(auto& file : files) {
        if(exists(file.c_str())) {
            struct stat info;
            stat(file.c_str(), &info);
            
            if(info.st_mode & S_IFDIR) {
                std::cout << file << " is a directory" << std::endl;
            } else {
                std::cout << file << " is a file" << std::endl;
            }
        } else {
            std::cout << file << " does not exist" << std::endl;
        }
    }
    
    return 0;
}
```
