 Below is a C++ version of the Python code:

```C++
#include <iostream>
#include <filesystem>  // C++17 standard library

int main() {
    std::filesystem::path current_directory{"input.txt"};
    if(std::filesystem::exists(current_directory))
        std::cout << "File input.txt exists in the current directory." << std::endl;
    else
        std::cout << "File input.txt does not exist in the current directory." << std::endl;
    
    std::filesystem::path root_directory{"/input.txt"};  // Change this to "/docs" for checking docs directory
    if(std::filesystem::exists(root_directory))
        std::cout << "File /input.txt exists in the root directory." << std::endl;
    else
        std::cout << "File /input.txt does not exist in the root directory." << std::endl;
    
    return 0;
}
```
Please note that this will only work on C++17 or above, as it uses the `<filesystem>` library which is a part of the standard library in C++17. If you are using an older version of C++, you might need to implement a different solution.
