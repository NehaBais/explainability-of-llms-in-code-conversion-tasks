The equivalent C++ code for the given Python code is as follows:

```cpp
#include <filesystem>

void create(const std::string &directory) {
    std::filesystem::path dirPath = directory;
    std::ofstream ofs(dirPath / "output.txt");
    std::filesystem::create_directories(dirPath / "docs");
}

int main() {
    create("."); // current directory
    create("/"); // root directory

    return 0;
}
```

This C++ code uses the `<filesystem>` library to create a new empty file called "output.txt" and an empty directory called "docs". The `create()` function takes in a path as input and creates the necessary files and directories using the `std::ofstream` class for creating the file and the `std::filesystem::create_directories` function to create the directory. The `main()` function calls this `create()` function twice, once for the current working directory (represented by ".") and once for the root directory ("/").
