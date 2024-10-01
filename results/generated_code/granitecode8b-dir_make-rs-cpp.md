Here's the equivalent code in C++:
```cpp
#include 
#include 
int main() {
 std::filesystem::path path = "./path/to/dir";
 if (!std::filesystem::exists(path)) {
 try {
 std::filesystem::create_directories(path);
 } catch (const std::exception& e) {
 std::cerr << "Error creating directory: " << e.what() << std::endl;
 return 1;
 }
 }
 return 0;
}
```
The C++ code uses the `` and `` libraries to create a directory and any missing parents. The `std::filesystem::path` class represents a file system path, and the `std::filesystem::exists()` function checks if the path exists. If it doesn't exist, the `std::filesystem::create_directories()` function is used to create all missing directories in the path. Any errors that occur during this process are caught and handled by printing an error message to `stderr` and returning a non-zero exit code.

