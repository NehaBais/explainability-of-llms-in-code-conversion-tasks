In C++, you can use the `ifstream` object to determine if a file exists and get its size. Here is how we could translate your Go code into C++:

```cpp
#include <iostream>
#include <fstream>
#include <exception>

void printFileSize(std::string f) {
    std::ifstream fileStream;

    try {
        fileStream.open(f, std::ios_base::in | std::ios_base::ate); // Open the file and go to end of file
        if (!fileStream.is_open()) {
            throw std::runtime_error{"Unable to open " + f};
        }

        std::streamsize fileSize = fileStream.tellg();  // Get the position, which is the size in bytes
        std::cout << "File '" << f << "' size: " << fileSize << " Bytes\n";
    } catch (const std::exception& e) { // Catch any exceptions that occur during this process
        std::cerr << "Caught exception: " << e.what() << '\n'; 
    }
}

int main(){
    printFileSize("input.txt");
    // Note, on Windows it may require `\\` instead of `/` at the beginning for the root directory (i.e., `"\\input.txt"`)
    printFileSize("/input.txt"); 
}
```
This code opens each file in read-only mode and then moves to the end (`std::ios_base::ate` flag) using `tellg()` function which returns the current position (file size) in bytes, and prints that value. If any error occurs during this process it throws an exception with a corresponding message.
