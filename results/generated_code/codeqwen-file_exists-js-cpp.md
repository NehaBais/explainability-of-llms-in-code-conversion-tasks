The equivalent code in C++ would be:

```C++
#include <iostream>
#include <filesystem>

int main() {
    std::string current_directory = std::filesystem::current_path().string();

    if (std::filesystem::exists("input.txt")) {
        std::cout << "File 'input.txt' exists in the current directory.\n";
    } else {
        std::cout << "File 'input.txt' does not exist in the current directory.\n";
    }

    if (std::filesystem::exists("c:/input.txt")) {
        std::cout << "File 'input.txt' exists in the root directory.\n";
    } else {
        std::cout << "File 'input.txt' does not exist in the root directory.\n";
    }

    if (std::filesystem::exists("docs")) {
        std::cout << "Folder 'docs' exists in the current directory.\n";
    } else {
        std::cout << "Folder 'docs' does not exist in the current directory.\n";
    }

    if (std::filesystem::exists("c:/docs")) {
        std::cout << "Folder 'docs' exists in the root directory.\n";
    } else {
        std::cout << "Folder 'docs' does not exist in the root directory.\n";
    }

    return 0;
}
```

This C++ code uses the `filesystem` library, which is a part of the C++ standard library. The `exists` function checks whether a file or directory with a certain name exists at a certain path.
