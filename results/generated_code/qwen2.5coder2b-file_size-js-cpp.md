In C++, you can use the `std::filesystem` library to read the size of a file. Here's how you could do this:

```cpp
#include <iostream>
#include <filesystem>

int main() {
    std::filesystem::path file1 = "input.txt";
    std::filesystem::path rootFile = "/c:/input.txt";

    if (std::filesystem::exists(file1)) {
        std::cout << "File size: " << std::filesystem::file_size(file1) << " bytes" << std::endl;
    } else {
        std::cerr << "Error: File not found." << std::endl;
    }

    if (std::filesystem::exists(rootFile)) {
        std::cout << "Root file size: " << std::filesystem::file_size(rootFile) << " bytes" << std::endl;
    } else {
        std::cerr << "Error: Root file not found." << std::endl;
    }

    return 0;
}
```

Please note, the path for the root directory might vary depending on your operating system (e.g., `/` for Linux and `C:/` or `D:` for Windows). Also, using `std::filesystem` requires C++17 or later.
