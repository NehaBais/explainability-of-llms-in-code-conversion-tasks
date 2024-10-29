Here is the equivalent C++ code for your given C program using `fstream` and `ifstream::seekg` methods to obtain file size:

Please note that in C++, we generally use exceptions rather than error codes. So an exception-based approach has been used in this code snippet. 

```cpp
#include <iostream>
#include <fstream>

void printFileSize(const std::string& filePath) {
    std::ifstream fileStream(filePath, std::ios::binary); // open the file in binary mode to avoid any translation of newline characters (\n) and similar.
    
    if (fileStream.fail()) {
        std::cout << "Failed to open the file: " << filePath << "\n";
        return;
    }
  
    // go to end and then back so we can get size of file.
    fileStream.seekg(0, std::ios::end); 
    long fileSize = fileStream.tellg();
    
    if (fileStream.fail()) {
        std::cout << "Failed to determine the size of the file: " << filePath << "\n";
        return;
    }
  
    // print out number of bytes in file.
    std::cout << "Size of file: " << filePath << " is :" << fileSize << " bytes.\n"; 
}

int main() {
    try {
        printFileSize("input.txt");  
        // Note that an absolute path to a file in the root filesystem varies by operating system, 
        // and should be specified accordingly ("/" or "C:\") for your specific use case.
        //printFileSize("/input.txt");   
    } catch(const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << '\n';
        return 1;
    } catch(...) {
        std::cerr << "Unknown exception caught\n";
        return 2;<｜begin▁of▁sentence｜><｜end▁of▁sentence｜><｜begin▁of▁sentence｜>﻿

