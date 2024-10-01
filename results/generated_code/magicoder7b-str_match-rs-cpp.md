 Below is your Rust code converted to C++:

```c++
#include <iostream>
#include <string>
#include <algorithm>

void print_match(const std::optional<size_t>& possible_match) {
    if (possible_match.has_value()) {
        std::cout << "Found match at pos " << *possible_match << std::endl;
    } else {
        std::cout << "Did not find any matches" << std::endl;
    }
}

int main() {
    std::string s1 = "abcd";
    std::string s2 = "abab";
    std::string s3 = "ab";
    
    // Determining if the first string starts with second string
    assert(s1.find(s3) == 0);

    // Determining if the first string contains the second string at any location
    auto position = s1.find(s2);
    print_match(position != std::string::npos ? std::make_optional<size_t>(position) : std::nullopt); // Found match at pos 0

    // Determining if the first string ends with the second string
    assert(s2.find(s3, s2.length() - s3.length()) != std::string::npos);
    
    return 0;
}
```
