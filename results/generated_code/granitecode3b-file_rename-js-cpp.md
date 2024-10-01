Here's the C++ code that accomplishes the task:
```c++
#include 
#include 
int main() {
 std::filesystem::rename("input.txt", "output.txt");
 std::filesystem::rename("c:\\input.txt", "c:\\output.txt");
 std::filesystem::rename("docs", "mydocs");
 std::filesystem::rename("c:\\docs", "c:\\mydocs");
 return 0;
}
```
Note that the code uses the `` and `` libraries for file and directory operations, respectively. The `` library is included in the `` header file.

