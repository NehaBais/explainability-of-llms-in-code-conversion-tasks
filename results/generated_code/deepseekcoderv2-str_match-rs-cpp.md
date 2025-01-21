 Sure, here is the equivalent code in C++:

```cpp
#include <iostream>
#include <string>

void print_match(std::size_t match_pos) {
    if (match_pos != std::string::npos) {
        std::cout << "Found match at position " << match_pos << std::endl;
    } else {
        std::cout << "Did not find any matches" << std::endl;
    }
}

int main() {
    std::string s1 = "abcd";
    std::string s2 = "abab";
    std::string s3 = "ab";
    
    // Determining if the first string starts with the second string
    if (s1.find(s3) == 0) {
        std::cout << "s1 starts with s3" << std::endl;
    } else {
        std::cout << "s1 does not start with s3" << std::endl;
    }
    
    // Determining if the first string contains the second string at any location
    if (s1.find(s3) != std::string::npos) {
        std::cout << "s1 contains s3" << std::endl;
    } else {
        std::cout << "s1 does not contain s3" << std::endl;
    }
    
    // Print the location of the match
    print_match(s1.find(s3)); // Found match at position 0
    print_match(s1.find(s2)); // Did not find any matches
    
    // Determining if the first string ends with the second string
    if (s2.size() >= s3.size() && s2.substr(s2.size() - s3.size()) == s3) {
        std::cout << "s2 ends with s3" << std::endl;
    } else {
        std::cout << "s2 does not end with s3" << std::endl;
    }
    
    return 0;
}
```

In this C++ code:
1. We use `find` to check if the first string contains the second string at any location and get its position.
2. We handle multiple occurrences by checking if the result of `find` is not `std::string::npos`.
3. For the start and end checks, we manually verify these conditions using substrings or direct comparisons.
