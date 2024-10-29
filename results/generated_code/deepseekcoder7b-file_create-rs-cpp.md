In C++ we can use the `std::filesystem` library. It is available from C++17 onwards, and does not depend on the filesystem's API (like in Unix), but it abstracts it away so that the code remains cross-platform. 
Here's how to translate your Rust code into C++:

```cpp
#include <iostream>
#include <fstream>
#include <filesystem>
#include <cstdlib>  // For exit() function

namespace fs = std::filesystem;  // Alias for convenience

const char* FILE_NAME = "output.txt";
const char* DIR_NAME  = "docs";

int main() {
    try{
        create(".");
        create("/");
    } catch(std::exception& e) {  
        errorHandler(e.what(), 1);   // Exception will contain the error message 
    }
    
    return 0;
}

void create(const std::string& root){
    fs::create_directories(root + "/" + DIR_NAME);
    std::ofstream file((root + "/" + FILE_NAME).c_str(), std::ios::out | std::ios::trunc);  // Open and truncate the file
}

void errorHandler(const std::string& error, int code){
    std::cerr << "Error: " << error;   // Write to stderr
    exit(code);                          // Terminate program with given return status
}
```
Please note that '/' is used for root directory in windows as well. If you want it to work on Linux/Unix systems, you might have to replace all occurrences of "/" with "\\". 

Also, C++ does not support the same syntax for multiple error handling like Rust. The try-catch block is the preferred way of dealing with potential exceptions in C++.

