Here's the C++ code that accomplishes the same task as the given Python code:
```c++
#include 
#include 
#include 
int main() {
 std::filesystem::path current_directory = ".";
 std::filesystem::path root_directory = "/";
 createFile(current_directory);
 createDirectory(root_directory);
 return 0;
}
void createFile(const std::filesystem::path& directory) {
 std::ofstream file(directory.string() + "/output.txt");
 if (file.is_open()) {
 file.close();
 }
}
void createDirectory(const std::filesystem::path& directory) {
 std::filesystem::create_directory(directory.string() + "/docs");
}
```
Note that in C++, the `std::filesystem` library is used to handle paths, and the `std::ofstream` class is used to create an empty file.

