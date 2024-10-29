To check if a file or a directory exists in C++ we can use `<filesystem>` library introduced since C++17 which provides classes and functions for file system manipulation. 

However, please note that this feature is not supported by all compilers (e.g., gcc 4.9). So if you are using an older compiler or one without filesystem support, the code might need to be adapted accordingly (which may involve using C library functions for file handling like `access()`).

Here's how it can be done:
```cpp
#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;
int main() {
    // Checking in the current working directory. 
    if(fs::exists("docs/input.txt") && fs::is_regular_file("docs/input.txt")){
        std::cout << "File exists" << '\n';  
    } else{
        std::cout << "The file does not exist."<<'\n'; 
    }
    
    if(fs::exists("/docs") && fs::is_directory("/docs")){
         std::cout << "/docs exists" << '\n';  
    } else {
        std::cout << "The /docs directory does not exist."<<'\n'; 
    }
    
return 0;
}
```
This program checks for the existence of a file called `input.txt` in the current working directory and a subdirectory named `/docs` in the filesystem root. It also verifies if it's indeed a regular file or directory before reporting about its existance. If you want to check only files or directories, remove respective checks for other types.

