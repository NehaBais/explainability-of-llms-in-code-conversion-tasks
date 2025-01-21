The equivalent C++ code would look like this:

```cpp
#include <iostream>
#include <filesystem>

int main() {
    std::filesystem::path inputPath("input.txt");
    std::filesystem::path docsPath("docs");

    if (std::filesystem::exists(inputPath)) {
        std::cout << "The file 'input.txt' exists." << std::endl;
    } else {
        std::cout << "The file 'input.txt' does not exist." << std::endl;
    }

    if (std::filesystem::exists(docsPath)) {
        std::cout << "The directory 'docs' exists." << std::endl;
    } else {
        std::cout << "The directory 'docs' does not exist." << std::endl;
    }
    
    return 0;
}
```

Note: The `std::filesystem` library in C++17 and above is used here, which was introduced to handle filesystem operations. Also note that on Windows systems, a different path separator is used `/` instead of `\`.
