The C++ standard library does not provide a direct equivalent for the Python os module, but you can use the standard filesystem library instead. Please note that checking if a directory exists in C++ is a bit more complex than it is in Python because there are no built-in functions to do so, hence we need to handle exceptions as well:

```cpp
#include <iostream>
#include <fstream>
#include <filesystem>

int main() {
    // Check for file and directory in current working directory
    std::cout << (std::filesystem::exists("input.txt") ? "File exists" : "File does not exist")<< std::endl;
    std::cout << (std::filesystem::is_directory("docs") ? "Directory exists" : "Directory does not exist")<< std::endl;
    
   // Check for file and directory in filesystem root (on Unix-like "/" on Windows "C:\\")
    #ifdef _WIN32 
        const char root[] = "C:\\";
    #else
        const char root[] = "/";
    #endif
    
    std::string filePath = std::string(root) + "input.txt";
    std::string dirPath = std::string(root) + "docs";
  
    try { 
        if (std::filesystem::exists(filePath))
            std::cout << "File exists" << std::endl;
        else
            std::cout << "File does not exist" << std::endl;
      
        if (std::filesystem::is_directory(dirPath)) 
            std::cout << "Directory exists" << std::endl;
        else
            std::cout << "Directory does not exist" << std::endl;
    } catch (const std::filesystem::filesystem_error& e) {
       // handle exception
       std::cerr << e.what() << '\n';
    }
    
   return 0;
}
```
This code checks for existence of a file called `input.txt` and a directory called `docs` in the current working directory, then it does the same for the root filesystem (on Windows "C:\\" on Unix-like "/"). The program prints to stdout whether each path exists or not.

