 Below is your Python code converted to C++:

Please note, due to differences in handling strings in Python and C++, the character indexing approach is slightly different, especially when considering Unicode characters. Also, C++ does not have built-in functions for string subtraction or index operation as we do in python. So, I've used standard library functions to perform these operations.

```cpp
#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string s = "abcdefgh";
    int n = 2;
    int m = 3;
    char c = 'd';
    
    // starting from n=2 characters in and m=3 in length.
    if(n + m <= s.size()) {
        std::string substring = s.substr(n, m);
        std::cout << "Starting from index: " << n << ", End index: " << (n+m-1) << "\n";
        std::cout << "Substring: \"" << substring << "\"\n\n";
    } 
    
    // starting from n=2 characters in, up to the end of the string.
    if(n <= s.size()) {
        std::string substring = s.substr(n);
        std::cout << "Starting from index: " << n << "\n";
        std::cout << "Substring: \"" << substring << "\"\n\n";
    } 
    
    // whole string minus last character;
    if(s.size() > 1) {
        std::string substring = s.substr(0, s.size() - 1);
        std::cout << "Whole string without the last character\n";
        std::cout << "Substring: \"" << substring << "\"\n\n";
    }
    
    // starting from a known character 'd' within the string and of m length.
    auto pos = s.find(c);
    if(pos != std::string::npos && (pos + m) <= s.size()) {
        std::string substring = s.substr(pos, m);
        std::cout << "Starting from index: " << pos << ", End index: " << (pos+m-1) << "\n";
        std::cout << "Substring: \"" << substring << "\"\n\n";
    } 
    
    // starting from a known substring 'cd' within the string and of m length. 
    pos = s.find(chars);
    if(pos != std::string::npos && (pos + m) <= s.size()) {
        std::string substring = s.substr(pos, m);
        std::cout << "Starting from index: " << pos << ", End index: " << (pos+m-1) << "\n";
        std::cout << "Substring: \"" << substring << "\"\n\n";
    } 
    
    return 0;
}
```

This C++ code does not handle the case where a character or substring isn't found. You might need to add some additional error handling based on your requirements, but this should give you an idea of how to convert your Python code to C++.
