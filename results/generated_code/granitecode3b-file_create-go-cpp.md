Here is the equivalent C++ code for the given Golang code:
```
#include 
#include 
#include  
int main() {
 std::ofstream file("output.txt");
 if (file.is_open()) {
 std::cout << " successfully opened for writing!" << std::endl;
 file.close();
 } else {
 std::cerr << " could not open for writing" << std::endl;
 return 1;
 }
 
 std::string path = "/docs";
 if (mkdir(path.c_str(), 0777) == -1) {
 perror("mkdir");
 } else {
 std::cout << "directory created!" << std::endl;
 }
 
 path = "input.txt";
 if (std::ofstream output(path)) {
 std::cout << " successfully opened for writing!" << std::endl;
 output.close();
 } else {
 std::cerr << " could not open for writing" << std::endl;
 return 1;
 }
 
 path = "/input.txt";
 if (std::ofstream output(path)) {
 std::cout << " successfully opened for writing!" << std::endl;
 output.close();
 } else {
 std::cerr << " could not open for writing" << std::endl;
 return 1;
 }
 
 path = "/docs";
 if (mkdir(path.c_str(), 0777) == -1) {
 perror("mkdir");
 } else {
 std::cout << "directory created!" << std::endl;
 }
 
 return 0;
}
```
This C++ code creates a file called "output.txt" of size 0 bytes and an empty directory called "docs" in the current working directory, as well as in the filesystem root. The Golang code uses the `os` package to achieve this functionality.

