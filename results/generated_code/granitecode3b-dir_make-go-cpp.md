Here's an implementation of the `mkdir_all` function in C++ that uses the `mkdir` and `rmdir` functions to create all the necessary directories in a cross-platform manner:
```c++
#include 
#include 
#include 
#ifdef _WIN32
#include 
#else
#include 
#endif
 
std::string get_directory(const std::string& path) {
 size_t last_slash = path.find_last_of("/\\");
 if (last_slash == std::string::npos) {
 return "";
 }
 return path.substr(0, last_slash);
}
 
void mkdir_all(const std::string& path) {
 size_t last_slash = path.find_last_of("/\\");
 if (last_slash == std::string::npos) {
 mkdir(path.c_str(), 0770);
 return;
 }
 
 std::string directory = get_directory(path);
 mkdir_all(directory);
 mkdir((path + "/").c_str(), 0770);
}
 
int main() {
 try {
 mkdir_all("/tmp/some/path/to/dir");
 } catch (std::exception& e) {
 std::cerr << "Error creating directory: " << e.what() << std::endl;
 return 1;
 }
 
 return 0;
}
```
This implementation uses the `mkdir` and `rmdir` functions from the C standard library to create directories in a cross-platform manner. The `get_directory` function extracts the directory name from a given path, and the `mkdir_all` function recursively creates all the necessary directories by calling itself on each parent directory until it reaches the leaf directory.
Note that this implementation may not work correctly if the path contains spaces or other special characters that are not supported by the operating system's `mkdir` function. In these cases, you may need to use a different approach to create the directory.

