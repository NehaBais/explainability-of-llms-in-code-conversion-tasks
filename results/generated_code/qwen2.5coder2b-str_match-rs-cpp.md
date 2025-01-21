To convert this Rust code to C++, you can use standard string functions in C++. Here's how you can write the equivalent C++ function:

```cpp
#include <iostream>
#include <string>

void print_match(const std::optional<int>& match_pos) {
    if (match_pos.has_value()) {
        std::cout << "Found match at pos " << *match_pos << std::endl;
    } else {
        std::cout << "Did not find any matches" << std::endl;
    }
}

int main() {
    const std::string s1 = "abcd";
    const std::string s2 = "abab";
    const std::string s3 = "ab";

    // Determining if the first string starts with second string
    bool start_match = s1.substr(0, s3.length()) == s3;
    print_match(start_match ? std::optional<int>{0} : std::nullopt);

    // Determining if the first string contains the second string at any location
    bool contains_match = s1.find(s3) != std::string::npos;
    print_match(contains_match ? std::optional<int>{s1.find(s3)} : std::nullopt);

    // Print the location of the match 
    if (contains_match) {
        std::cout << "Found match at pos " << s1.find(s3) << std::endl;
    } else {
        std::cout << "Did not find any matches" << std::endl;
    }

    // Determining if the first string ends with the second string
    bool end_match = s1.substr(s1.length() - s2.length(), s2.length()) == s2;
    print_match(end_match ? std::optional<int>{s1.length() - s2.length()} : std::nullopt);
}
```
This C++ code achieves the same functionality as the Rust code by using the `substr` function to check if strings start and end with another string, and the `find` function to locate whether a substring exists in another string.
