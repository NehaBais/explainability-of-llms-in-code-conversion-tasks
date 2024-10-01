The equivalent C++ code would be as follows:

```cpp
#include <iostream>
#include <fstream>
#include <cstdlib> 

int main() {
    // Get the size of a file called 'input.txt' in current working directory
    std::ifstream file("input.txt", std::ios::ate | std::ios::binary);
    if (!file) {
        std::cerr << "Error: Could not open file 'input.txt'\n"; 
        exit(2);
    }
    auto size = file.tellg();
    file.close();  // It's important to close the file before using its size
    std::cout << "Size of input.txt is " << size << " bytes\n";

    // Get the size of a file in the root directory, say 'root_file.txt'
    file.open("/path_to_your_directory/root_file.txt", std::ios::ate | std::ios::binary);
    if (!file) {
        std::cerr << "Error: Could not open file '/path_to_your_directory/root_file.txt'\n"; 
        exit(2);
    }
    size = file.tellg();
    file.close();  // It's important to close the file before using its size
    std::cout << "Size of '/path_to_your_directory/root_file.txt' is " << size << " bytes\n";
    return 0;
}
```

Remember, in C++ you have to provide a full path for the file (unless it's in the same directory) because there isn't an equivalent concept of 'current working directory' as in Rust. Replace '/path_to_your_directory/root_file.txt' with your actual root directory and filename. 

Also, make sure to handle the situation where file opening is unsuccessful due to non-existing files or other I/O errors by checking if the stream `file` is valid using the `if (!file)` condition before calling any file operation methods on it.
