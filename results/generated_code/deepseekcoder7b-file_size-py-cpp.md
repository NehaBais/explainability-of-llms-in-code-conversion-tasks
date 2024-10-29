Here is the C++ equivalent of your Python code using fstream library functions to get file size. Note that getting a file's absolute path might require platform-dependent solutions as it depends on how you're running this in an environment. 

Include `<fstream>` for file stream operations, and `<iostream>` for input/output operations:
```C++
#include <fstream>
#include <iostream>

int main() {
    std::ifstream inputFile1("input.txt", std::ios::binary);  // Open file in binary mode to get its size
    if (inputFile1) {
        inputFile1.seekg(0, std::ios::end);   // Jump to end of file
        int size = inputFile1.tellg();         // Get position in file which gives the length i.e. size
        std::cout << "Size of 'input.txt' is: "<< size <<" bytes.\n"; 
    } else {
        std::cout << "Unable to open 'input.txt'\n";
    }  
    
    // To get the size of a file in root directory, we need an absolute path which depends on OS and can't be generalized for all cases. For example: 
#ifdef _WIN32   //Windows platform specific code
    std::ifstream inputFile2("C:\\input.txt", std::ios::binary);
#else           //Unix/Linux platform specific code - depends on how your system is setup, and assuming 'input.txt' resides at the root directory('/') 
    std::ifstream inputFile2("/input.txt", std::ios::binary);  
#endif  
    
    if (inputFile2) {
        inputFile2.seekg(0, std::ios::end);
        int size = inputFile2.tellg();
        std::cout << "Size of '/input.txt' is: "<< size <<" bytes.\n"; 
    } else {
        std::cout << "Unable to open '/input.txt'\n";
    }  

    return 0;
}
```
The code above assumes that the file 'input.txt' resides at root directory of your hard drive in Unix/Linux systems or C:\ drive in Windows system. If not, you have to provide the absolute path of the file. You may need administrative privileges to access files in some locations on both Windows and Linux/Unix platforms. 

Please note that for getting file size at root directory, you'll need appropriate permissions which might be restricted or may require elevation (sudo). 
This code also considers binary mode while opening the file streams as it is generally safer to read a binary file because text files may contain non-text characters that could cause problems if read as text.

