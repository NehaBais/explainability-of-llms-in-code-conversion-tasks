 The equivalent C++ code would be as follows. Note that filesystem library for C++ is not part of the Standard Library, so you might need to add additional libraries. I used <filesystem> from c++17.

```cpp
#include<iostream>
#include<fstream>
#include<filesystem>

int main() {
    try {
        std::filesystem::create_directory("/" + std::filesystem::path{"docs"});
        std::ofstream("output.txt");
        
        auto currentPath = std::filesystem::current_path();
        std::filesystem::create_directory(currentPath/"docs");
        std::ofstream((currentPath/"output.txt").c_str());
    } catch (const std::exception& e) {
        std::cerr << "Error: "<<e.what()<<'\n';
        return -1;
    } 
}
```
