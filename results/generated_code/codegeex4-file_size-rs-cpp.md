```cpp
#include <iostream>
#include <filesystem>
#include <cstdlib>

void exit_err(const std::string &msg, int code) {
    std::cerr << "Error: " << msg << "\n";
    std::exit(code);
}

int main() {
    const char *file_name = getenv("1");
    if (!file_name) {
        exit_err("No file name supplied", 1);
    }

    std::error_code ec;
    auto metadata = std::filesystem::metadata(file_name, ec);

    if (ec) {
        exit_err(ec.message(), 2);
    }

    std::cout << "Size of " << file_name << " is " << metadata.file_size() << " bytes\n";
}
```
