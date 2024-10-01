Here's how you can implement the `mkdirp` function in C++:
```c++
#include 
#include 
namespace fs = std::filesystem;
void mkdirp(const std::string& path) {
 if (fs::exists(path)) {
 return;
 }
 fs::path p(path);
 while (!p.empty()) {
 fs::create_directory(p);
 p.remove_filename();
 }
}
```
The `mkdirp` function takes a single path string as input and creates the directory if it does not already exist. It uses the `std::filesystem` library to check if the directory exists, create directories, and remove filenames from the path. The loop iterates through each component of the path until it reaches the final directory name.

