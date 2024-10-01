Here's a C++ implementation of the `mkdirp` function that fulfills the requirements:
```c++
#include 
#include 
#include 
namespace fs = std::filesystem;
void mkdirp(const std::string& p) {
    std::error_code ec;
    fs::create_directories(p, ec);
    if (ec) {
        throw std::system_error(ec);
    }
}
int main() {
    try {
        mkdirp("./path/to/dir");
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}
```
In this implementation, we use the `std::filesystem` library to create directories recursively. The `mkdirp` function takes a single path string and creates any missing parent directories as necessary. If the directory already exists, the function does nothing.

