Sure, the provided Golang code is for renaming two files and one directory. Here's how you would do it in C++:

Firstly, we need to include the `filesystem` library which provides functions to work with the filesystem. The path of this library could vary depending on your specific environment. You may need to add it at the beginning of your file (prior to main function). 

```cpp
#include <filesystem>
using namespace std;
using namespace filesystem;

int main() {
    // Rename "input.txt" to "output.txt"
    rename("input.txt", "output.txt");

    // Rename "docs" directory to "mydocs"
    rename("docs", "mydocs");

    // Root directory change 
    rename("/input.txt", "/output.txt");
    rename("/docs", "/mydocs");

    return 0;  
}
```
Please note that file paths in C++ are different from Go due to the fact that they use POSIX-style paths instead of Windows-style paths. So, we need to use `/` as a delimiter for root directory change. 
Also, C++ doesn't have native support for renaming files and directories across filesystems like Go does. Therefore, this code only works on the same filesystem where it is run.
