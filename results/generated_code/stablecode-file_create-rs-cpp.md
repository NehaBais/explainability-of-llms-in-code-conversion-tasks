The equivalent C++ code for the given Rust code is as follows:

```cpp
#include <iostream>
#include <filesystem>

const std::string FILE_NAME = "output.txt";
const std::string DIR_NAME = "docs";

void create(const std::string& root) {
    std::filesystem::path f_path(root);
    f_path /= FILE_NAME;

    std::filesystem::path d_path(root);
    d_path /= DIR_NAME;

    try {
        std::filesystem::create_directories(d_path));
        std::ofstream file(f_path);
        file.close();
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        exit(1);
    }
}

int main() {
    create(".");
    create("/");
    return 0;
}
```

This C++ code creates two empty files named `output.txt` in the current working directory and once in the root of the filesystem. It also creates an empty directory named `docs`.

Please note that this code uses the C++17 standard, which provides a set of new features for the C++ programming language. To enable these features, your compiler must be configured to support C++17.
