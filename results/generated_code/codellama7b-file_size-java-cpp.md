
Here's the C++ code that fulfills this requirement:

```cpp
#include <iostream> 
#include <filesystem> 

using namespace std; 

int main() {
    filesystem::path fileA = "file.txt";
    cout << fileA.length() << " B" << endl;
    filesystem::path fileB = "/file.txt";
    cout << fileB.length() << " B" << endl;
    return 0;
}
```