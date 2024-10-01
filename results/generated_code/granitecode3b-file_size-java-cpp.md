Here's the equivalent C++ code for the given Java code snippet:
```c++
#include 
#include 
#include 
int main() {
 std::ifstream fileA("file.txt");
 if (fileA) {
 std::cout << fileA.tellg().seekp(0, std::ios_base::end).tellg() << " B" << std::endl;
 fileA.close();
 }
 std::ifstream fileB("/file.txt");
 if (fileB) {
 std::cout << fileB.tellg().seekp(0, std::ios_base::end).tellg() << " B" << std::endl;
 fileB.close();
 }
 return 0;
}
```
In this C++ code, we first open the file "file.txt" in the current working directory and get its size using `std::ifstream`. We then close the file and continue to open the file "/file.txt" in the root directory. Finally, we print out the size of both files in bytes using `std::cout`. Note that we use `std::ios_base::end` to get the current position in the stream, which is necessary because we want to get the size of the file, not its contents.

