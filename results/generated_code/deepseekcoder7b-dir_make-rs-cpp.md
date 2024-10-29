The equivalent C++ code for creating a directory and any missing parents would use the `std::filesystem`, which is available from C++17 onwards. The following function creates a directory path in a cross-platform way:

Please note that in Windows you will need at least Visual Studio 2019 or later to compile this code because of C++17 and above features.

```cpp
#include <filesystem>
#include <iostream>

int main() {
    namespace fs = std::filesystem;
    
    fs::path p{"./path/to/dir"};
    
    try {
        if(!fs::exists(p)) {  // If the path does not exist...
            fs::create_directories(p);  // Create all directories along the path.
        }
    } catch(const fs::filesystem_error& e) {  
        std::cerr << "An error occured: " << e.what() << '\n';
    }
    
    return 0;
}
```
This C++ program will create the `./path/to/dir` if it does not exist, and any missing parents along the path. If an error occurs (like insufficient permissions), an exception is thrown which is caught in a catch block and its message is printed to standard error output.

