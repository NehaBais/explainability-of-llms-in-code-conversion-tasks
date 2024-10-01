The provided Golang code is verifying if a file called input.txt and a directory called docs exist in the current working directory and filesystem root respectively.

Here is how you can convert this into C++:

```cpp
#include <iostream>
#include <dirent.h>
#include <sys/stat.h>
using namespace std;
void printStat(const char* p) {
    struct stat st;
    if (stat(p, &st) == -1){ 
        cout << "Error occurred while getting the information of '"<< p << "'.\n";
        return;
    }
      
    if (S_ISDIR(st.st_mode)) { 
        cout << p << " is a directory.\n";
    } else {
        cout << p << " is not a directory, it's a file.\n";
    } 
}
int main() {
    printStat("input.txt"); 
    printStat("/input.txt"); // Note: this should not work as '/' is the root of the filesystem in Linux systems.
    printStat("docs");
    printStat("/docs"); // Note: this should not work as '/docs' is the root of the filesystem in Linux systems.
}
```
Please remember to include the `dirent.h` and `sys/stat.h` header files in your C++ program if you are using these features. Also, it's important to know that in Linux the root directory '/' cannot be statted because it doesn't have any structure (like a file or a directory). The '/input.txt' and 'docs' mentioned in the provided code would not work as well.
