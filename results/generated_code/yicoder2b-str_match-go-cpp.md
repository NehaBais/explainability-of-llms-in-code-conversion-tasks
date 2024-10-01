Below is the equivalent C++ code for the given Golang code:

```cpp
#include <iostream>
#include <string>

void match(std::string first, std::string second) {
    std::cout << "1. "<< first << " starts with " << second << ": " << (first.rfind(second) == 0) << std::endl;

    int index = first.find(second);
    if (index != std::string::npos) {
        std::cout << "2. "<< first << " contains " << second << ": true, at location " << index << std::endl;
        for (size_t start = index + second.length(); ; ) {
            index = first.find(second, start);
            if (index == std::string::npos) break;
            std::cout << "2.1. at location " << start << "," << std::endl;
            start = index + second.length();
        }
        std::cout << "2.1. and that's all" << std::endl;
    } else {
        std::cout << "2. "<< first << " contains " << second << ": false," << std::endl;
    }

    std::cout << "3. "<< first << " ends with " << second << ": " << (first.rfind(second) == first.length() - second.length()) << std::endl;
}

int main() {
    match("abracadabra", "abr");
    return 0;
}
```
Please note that C++ uses std::string's rfind function to find the last occurrence of a sub-string in a string. Also, C++'s printf is used instead of the direct output. It also provides direct error handling and avoids possible null pointer errors from Go's nil check.
