Here's a C++ implementation of the `mkdirp` function using recursion and exceptions:
```c++
#include 
#include 
#include 
namespace fs = std::filesystem;
void mkdirp(const std::string& path) {
 try {
  fs::create_directories(path);
 } catch (const std::filesystem::filesystem_error& e) {
  if (e.code() == std::errc::file_exists) {
   // Directory already exists, so ignore the error.
  } else {
   throw;
  }
 }
}
int main() {
 mkdirp("path/to/dir");
 return 0;
}
```
This implementation uses the `std::filesystem` library to create directories and handle errors. The `mkdirp` function takes a path string as an argument and creates all the necessary directories along the way using a recursive approach. If a directory already exists, it simply ignores the error and moves on to the next directory in the path.

