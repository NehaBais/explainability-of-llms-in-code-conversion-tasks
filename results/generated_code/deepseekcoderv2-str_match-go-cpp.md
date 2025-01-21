 Here's the equivalent code in C++:

```cpp
#include <iostream>
#include <string>

void match(const std::string& first, const std::string& second) {
    std::cout << "1. " << first << " starts with " << second << ": " 
              << (first.find(second) == 0 ? "true" : "false") << std::endl;
    
    size_t index = first.find(second);
    if (index != std::string::npos) {
        std::cout << "2. " << first << " contains " << second << ": true," << std::endl;
        std::cout << "2.1. at location " << index << "," << std::endl;
        
        size_t start = index + 1;
        while (true) {
            index = first.find(second, start);
            if (index == std::string::npos) {
                break;
            }
            std::cout << "2.2. at location " << index << "," << std::endl;
            start = index + 1;
        }
        std::cout << "2.2. and that's all" << std::endl;
    } else {
        std::cout << "2. " << first << " contains " << second << ": false," << std::endl;
    }
    
    std::cout << "3. " << first << " ends with " << second << ": " 
              << (first.rfind(second) == first.size() - second.size() ? "true" : "false") << std::endl;
}

int main() {
    match("abracadabra", "abr");
    return 0;
}
```

This C++ code performs the same operations as your Go code:
1. Determines if the first string starts with the second string using `find` method and checking if it starts at index 0.
2. Determines if the first string contains the second string anywhere, printing the location(s) of occurrences found by `find`.
3. Determines if the first string ends with the second string using `rfind` method and comparing its position to the end of the first string minus the length of the second string.
