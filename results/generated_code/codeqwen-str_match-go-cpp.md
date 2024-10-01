Here is the equivalent C++ code for your Golang program:

```cpp
#include <iostream>
#include <string>

void match(std::string first, std::string Second) {
    std::cout << "1. " << First << " starts with " << Second << ": " 
              << (First.find(Second,0) == 0 ? "true" : "false") << "\n";

    size_t pos = First.find(Second);
    std::cout << "2. " << First << " contains " << Second << ": " 
              << (pos != std::string::npos) << ", ";
    if (pos != std::string::npos) {
        std::cout << "At location " << pos << "\n";

        for(size_t start = pos + 1; ; ){
            if((pos = First.find(Second,start)) == std::string::npos)
                break;
            std::cout << "2.2. At location " << (start+pos) << "\n";

            start += pos + 1;
        }
        std::cout << "2.2. And that's all\n";
    }

    std::cout << "3. " << First << " ends with " << Second << ": "
              << (First.rfind(Second) != std::string::npos ? "true" : "false") << "\n";
}

int main() {
    match("abracadabra", "abr");
    return 0;
}
```

This C++ code does the same things as your Golang program, but it does so using C++'s `std::string` class. The `find()` and `rfind()` functions are used to determine if a string starts with or ends with another string. And the `size_t` data type is used for positions.
