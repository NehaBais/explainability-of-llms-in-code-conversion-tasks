To convert the given Java code to C++, you can use this C++ code:
```cpp
#include <iostream>
#include <fstream>
int main() {
    std::ifstream inputFile("input.txt");
    if(inputFile)
        std::cout << "File exists" << '\n';
    else
        std::cout << "File does not exist" << '\n';

    std::ifstream fileA("file.txt");
    std::cout << "Length of file: " << fileA.tellg() << " bytes\n";
    
    std::ifstream fileB("/file.txt");
    std::cout << "Length of file: " << fileB.tellg() << " bytes\n";

    return 0;
}
```
Explanation:
- `#include <iostream>` is used to import the `std::cout` and `std::cerr` functions that print output and error messages, respectively.
- `#include <fstream>` is used to import the `std::ifstream` class that provides functionality for reading from files.
- The `std::ifstream` object named `inputFile` is created by passing the name of the file as a parameter to the constructor.
- The `if(inputFile)` condition checks if the input file exists and prints an appropriate message based on the result.
- Similarly, `fileA` is opened with the same approach as `inputFile`. The `std::ifstream::tellg()` function is used to obtain the length of the file in bytes.
- Finally, `fileB` is opened similarly to `fileA`, this time using an absolute path instead of a relative path. The output is printed accordingly.

