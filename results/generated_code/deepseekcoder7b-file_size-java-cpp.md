The equivalent C++ code would be as follows, using the C++ STL `<filesystem>` library that was introduced in C++17 and later versions of C++. 

Note that you need to include `<experimental/filesystem>` instead if your compiler doesn't support `std::filesystem` (like some older compilers). Also, it’s important to note that this library is still experimental but supported in GCC and Clang from version 6 onwards.

```C++
#include <iostream>
#include <experimental/filesystem>  // Or #include <filesystem> if your compiler supports std::filesystem (since C++17)

namespace fs = std::experimental::filesystem;  // Or namespace fs = std::filesystem; depending on which you choose to use.

int main() {
    fs::path fileA("file.txt");
    if(fs::exists(fileA))  
        std::cout << "File size of file.txt: " << fs::file_size(fileA)<<" B"<< std::endl; 
    else 
        std::cerr << "File does not exist."<<std::endl;
    
    fs::path fileB("/file.txt"); // Be aware that this might need root access to be able to read the file from system's root directory.
    if(fs::exists(fileB))  
        std::cout << "File size of /file.txt: " << fs::file_size(fileB)<<" B"<<std::endl; 
    else 
        std::cerr << "/File does not exist."<<std::endl;
    
    return 0;
}
```
This C++ code will check if the file exists and get its size using `fs::exists()`, `fs::file_size()` functions from the `<filesystem>` library. If a file does not exist, an error message is printed to standard error (stderr). The printf-like output is done through std::cout.

