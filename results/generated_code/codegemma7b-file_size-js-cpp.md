```cpp
#include <filesystem>

int main() {
    std::string inputFilePath = "input.txt";
    std::string rootFilePath = "/input.txt";

    if (std::filesystem::exists(inputFilePath)) {
        std::cout << "Size of input.txt in current working directory: " << std::filesystem::file_size(inputFilePath) << std::endl;
    } else {
        std::cout << "input.txt does not exist in current working directory." << std::endl;
    }

    if (std::filesystem::exists(rootFilePath)) {
        std::cout << "Size of input.txt in root directory: " << std::filesystem::file_size(rootFilePath) << std::endl;
    } else {
        std::cout << "input.txt does not exist in root directory." << std::endl;
    }

    return 0;
}
```

