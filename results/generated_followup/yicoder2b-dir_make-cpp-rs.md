Here is the C++ version of your Rust function:
```cpp
#include <filesystem>
#include <iostream>
using namespace std::literals; // for string literals 

int main(int argc, char* argv[]) {
    if (argc == 2) {
        std::string path = argv[1];
        auto pos = path.find_last_of('/');
        if (pos != std::string::npos)
            path.resize(pos); // resize the string to remove last '/'
        else if (path[0] == '/') {
            std::cout << "error: path starts with '/'\n";
            return -1;  // equivalent to exit(-1) in C++
        } else 
            path = "./" + path; // add a dot before the path if it is relative
    
        std::filesystem::path p(path); // create filesystem path object
        if (!std::filesystem::exists(p)) { // check if directory exists
            // equivalent to `mkdir -p` on Unix-like systems
            std::filesystem::create_directories(p); 
        } else 
            std::cout << "directory already exists\n"; 
    } else {
        std::cout << "usage: mkdir <path>\n";  // equivalent to `echo 'usage: mkdir <path>'` on Unix-like systems
    }
    return 0; // success
}
```
