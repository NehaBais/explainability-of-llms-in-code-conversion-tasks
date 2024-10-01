 Here is the code in C++:
```
#include <filesystem>
#include <iostream>
#include <fcntl.h>

int main() {
    std::filesystem::create_directory("docs"); //creates a directory called docs
    std::cout << "Directory created successfully!" << std::endl;
    return 0;
}
```
