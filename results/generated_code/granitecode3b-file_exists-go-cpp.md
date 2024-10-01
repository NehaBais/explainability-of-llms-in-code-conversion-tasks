Here's the C++ code that accomplishes the same task as the given Golang code:
```c++
#include 
#include 
#include 
int main() {
 std::filesystem::path path1("input.txt");
 std::error_code ec;
 if (std::filesystem::exists(path1, ec) && std::filesystem::is_directory(path1, ec)) {
 std::cout << "input.txt is a directory" << std::endl;
 } else {
 std::cout << "input.txt is a file" << std::endl;
 }
 
 std::filesystem::path path2("/");
 path2 /= "input.txt";
 if (std::filesystem::exists(path2, ec) && std::filesystem::is_directory(path2, ec)) {
 std::cout << "/input.txt is a directory" << std::endl;
 } else {
 std::cout << "/input.txt is a file" << std::endl;
 }
 
 std::filesystem::path path3("docs");
 if (std::filesystem::exists(path3, ec) && std::filesystem::is_directory(path3, ec)) {
 std::cout << "docs is a directory" << std::endl;
 } else {
 std::cout << "docs is a file" << std::endl;
 }
 
 std::filesystem::path path4("/");
 path4 /= "docs";
 if (std::filesystem::exists(path4, ec) && std::filesystem::is_directory(path4, ec)) {
 std::cout << "/docs is a directory" << std::endl;
 } else {
 std::cout << "/docs is a file" << std::endl;
 }
 return 0;
}
```
This code uses the C++ filesystem library to check if the files and directories exist and are of type directory. The output will be similar to the Golang output.

