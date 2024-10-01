Here's the C++ code that accomplishes the same task as the given Python code:
```c++
#include 
#include 
int main() {
 std::ifstream input("input.txt");
 if (input) {
 std::cout << "Size of input.txt: " << input.tellg() << " bytes" << std::endl;
 } else {
 std::cerr << "Error: Unable to open file input.txt" << std::endl;
 }
 input.close();
 
 std::ifstream rootInput("/input.txt");
 if (rootInput) {
 std::cout << "Size of /input.txt: " << rootInput.tellg() << " bytes" << std::endl;
 } else {
 std::cerr << "Error: Unable to open file /input.txt" << std::endl;
 }
 rootInput.close();
 
 return 0;
}
```
This code uses the `` and `` libraries in C++ to read the contents of a file and get its size. The first call to `tellg()` returns the current position in the input stream, which represents the size of the file. The second call to `tellg()` is made on the root input stream (`/`), which represents the entire file system.

