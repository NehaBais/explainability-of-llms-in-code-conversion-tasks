Here's the equivalent code in C++:
```c++
#include 
#include 
int main() {
 std::string path = "C:/parent/test";
 if (mkdir(path.c_str(), S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) == 0) {
 std::cout << "Directory created successfully" << std::endl;
 } else if (errno == EEXIST) {
 std::cout << "Directory already exists" << std::endl;
 } else {
 std::cerr << "Error creating directory: " << strerror(errno) << std::endl;
 }
 return 0;
}
```
Note that the `mkdir()` function in C++ creates all the necessary parent directories as well. The `S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH` permission bits are used to set the read, write, and execute permissions for the owner, group, and others.

