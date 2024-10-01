The equivalent code in C++ would be:

```cpp
#include <iostream>
#include <fstream>

void printFileSize(std::string f) {
    if (std::ifstream file(f, std::ios_base::ate | std::ios_base::binary)) {
        std::cout << "File size is: " << file.tellg() << "\n";
        file.close();
    } else {
        std::cerr << "Unable to open file\n";
    }
}

int main() {
    printFileSize("input.txt");
    printFileSize("/input.txt");
    return 0;
}
```
This program works in a similar way as the Go code, by trying to open the file specified with the `std::ifstream`, then getting and printing the current position of the file stream (which corresponds to its size), and closing it afterwards. If the opening fails, an error message is printed instead. Note that C++ handles files using streams, unlike Go's os package.
