Here is the equivalent C++ code:

```cpp
#include <iostream>
#include <fstream>

int main() {
    std::ifstream inFile1("input.txt", std::ifstream::ate | std::ifstream::binary);
    if (inFile1.is_open()) {
        std::streamsize size = inFile1.tellg();
        std::cout << "Size of 'input.txt' is: " << size << " bytes" << std::endl;
        inFile1.close();
    } else {
        std::cerr << "Error opening 'input.txt'" << std::endl;
    }

    std::ifstream inFile2("/input.txt", std::ifstream::ate | std::ifstream::binary);
    if (inFile2.is_open()) {
        std::streamsize size = inFile2.tellg();
        std::cout << "Size of '/input.txt' is: " << size << " bytes" << std::endl;
        inFile2.close();
    } else {
        std::cerr << "Error opening '/input.txt'" << std::endl;
    }

    return 0;
}
```
This code uses the C++ standard library `fstream` to open and read from files. The `tellg()` function is used to get the current position of the file pointer, which in this case would be the size of the file if it's opened at the end (`std::ifstream::ate`). It prints out the sizes of both files or errors if the files cannot be opened. Note that you need to ensure that your program has appropriate permissions to read these files.
