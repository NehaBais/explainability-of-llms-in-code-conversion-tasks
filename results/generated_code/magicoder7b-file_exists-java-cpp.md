 Below is your Java code converted to C++:

```cpp
#include <iostream>
#include <fstream> // for ifstream
#include <filesystem> // for path and exists

int main() {
    std::cout << "Checking file in current directory... ";
    std::ifstream file("input.txt");
    
    if (file) {
        std::cout << "Found.\n";
    } else {
        std::cout << "Not found.\n";
    }
    file.close(); // close the file

    std::filesystem::path p("/docs/input.txt");
    
    if (std::filesystem::exists(p)) {
        std::cout << "Checking file in root directory... Found.\n";
    } else {
        std::cout << "Checking file in root directory... Not found.\n";
    }

    return 0;
}
```

Please note that C++ doesn't have direct equivalent for Java's `new File()`. In this code snippet, we used `ifstream` to read a file. If the file exists and is readable, it will print "Found.", otherwise "Not found.". The same process is repeated for checking if `/docs/input.txt` exist or not.
