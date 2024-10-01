Here's the equivalent C++ code for creating a directory and any missing parents:
```c++
#include 
#include 

void createDirectory(std::string path) {
 std::filesystem::create_directories(path);
}
int main() {
 std::string path = "C:/parent/test";
 try {
 createDirectory(path);
 std::cout << "Directory created successfully" << std::endl;
 } catch (const std::exception& e) {
 std::cerr << "Error creating directory: " << e.what() << std::endl;
 }
 return 0;
}
```
The `std::filesystem::create_directories` function is used to create the directory and any missing parents. If the directory already exists, it will not throw an error, but instead return successfully. The C++ code also includes error handling using a try-catch block to catch any exceptions that may occur during the creation of the directory.

