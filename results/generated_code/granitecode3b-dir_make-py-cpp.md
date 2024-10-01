Here's an equivalent C++ implementation of the `mkdirp()` function:
```c++
#include 
#include 
#include 
namespace fs = std::filesystem;
void mkdirp(const std::string& path) {
 if (fs::exists(path)) {
 return;
 }
 fs::create_directories(path);
}
```
This implementation uses the `std::filesystem` library to check if the directory exists and create it using `std::filesystem::create_directory()`. The `exist_ok=true` parameter is not necessary in C++, as the function will throw an exception if the directory already exists.

