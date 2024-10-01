Here is the converted code from Java to C++ that verifies the size of a file called input.txt for a file in the current working directory and another one in the file system root:
```
#include 
#include 
int main() {
 std::string filename1 = "input.txt";
 std::string filename2 = "/input.txt";
 
 // Current working directory
 std::ifstream fileA(filename1);
 if (fileA) {
 long size1 = fileA.tellg();
 std::cout << size1 << " B" << std::endl;
 } else {
 std::cerr << "Error: Unable to open file " << filename1 << std::endl;
 return 1;
 }
 
 // File system root
 std::ifstream fileB(filename2);
 if (fileB) {
 long size2 = fileB.tellg();
 std::cout << size2 << " B" << std::endl;
 } else {
 std::cerr << "Error: Unable to open file " << filename2 << std::endl;
 return 1;
 }
 
 return 0;
}
``` 
Note that in C++, the `std::ifstream` constructor takes a string parameter representing the name of the file to be opened. Also, the `tellg()` function is used to obtain the size of the file in bytes.

