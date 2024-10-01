Here's an example implementation of the `mkdir -p` functionality in C++ using the `fs` library from the C++ Standard Template Library (STL):
```c++
#include 
#include 
namespace fs = std::filesystem;
void mkdir_p(const std::string& path) {
 try {
 fs::create_directories(path);
 } catch (const fs::filesystem_error& e) {
 std::cerr << "Error creating directory: " << e.what() << std::endl;
 }
}
int main() {
 mkdir_p("/tmp/some/path/to/dir");
 return 0;
}
```
This code defines a function `mkdir_p` that takes a single argument, the path to the directory to create. The function uses the `fs::create_directories` function from the C++ STL filesystem library to attempt to create all intermediate directories in the given path, as well as the final directory itself. If an error occurs during the creation of any part of the path, the code catches the `fs::filesystem_error` exception and prints an error message to stderr.
Note that this implementation uses the C++17 filesystem library, which is available in most modern compilers. If you're using an older compiler, you may need to update your toolchain or find a compatible library.

