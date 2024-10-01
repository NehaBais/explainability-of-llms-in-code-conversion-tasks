Below is the equivalent C++ code for the Rust code you provided:
```cpp
#include <iostream>
#include <fstream>
#include <sstream>
#include <sys/stat.h>
#include <unistd.h>
 
void create_directories(const std::string& path) {
    // Check if directory exists, create it otherwise
    auto parent = path.substr(0, path.find_last_of('/'));
    if (std::filesystem::exists(parent)) return;
    create_directories(parent);
    mkdir(path.c_str(), 0755);
}
 
int main() {
    create_directories("path/to/dir");
    // Other operations here...
}
``` 

Note that the `create_directories` function in C++ doesn't exist out of the box, but it can be implemented using simple `mkdir()` calls. This code assumes that parent directories don't already exist. You should modify this according to your requirements. Also, the example provided creates a directory named "path", not "./path/to/dir".

