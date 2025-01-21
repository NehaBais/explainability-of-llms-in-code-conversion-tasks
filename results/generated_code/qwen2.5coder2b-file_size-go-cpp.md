The equivalent code in C++ would look like this:

```cpp
#include <iostream>
#include <fstream>
#include <string>

void PrintFileSize(const std::string &file) {
    std::ifstream f(file);
    if (!f.is_open()) {
        std::cerr << "Cannot open file: " << file << std::endl;
        return;
    }
    
    std::streampos fileSize = f.tellg();
    f.close();
    std::cout << "File size is " << fileSize << " bytes" << std::endl;
}

int main() {
    PrintFileSize("input.txt");
    PrintFileSize("/input.txt");
}
```

In this code, we use the `<fstream>` and `<string>` libraries to read the file. The `PrintFileSize` function takes the file path as a parameter, tries to open it in read mode (`std::ifstream`). If the file is successfully opened, it uses the `tellg()` method to get the current position of the file pointer which corresponds to its size. This size value is then printed out.
