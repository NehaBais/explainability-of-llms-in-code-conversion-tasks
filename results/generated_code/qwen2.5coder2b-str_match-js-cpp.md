Below is the equivalent C++ code for the above JavaScript function, including your optional requirements:

```cpp
#include <iostream>
#include <vector>
#include <regex>

void matchStrings(const std::string& strA, const std::string& strB) {
    // 1. Determines if stringA starts with stringB
    bool q1 = (strA.find(strB) == 0);

    // 2. Determines if stringA contains stringB at any location
    std::size_t q2 = strA.find(strB);
    std::vector<std::size_t> matches;
    while(q2 != std::string::npos) {
        matches.push_back(q2);
        q2 = strA.find(strB, q2 + 1);
    }

    // Optional: Print the location of the match for part 2
    if(!matches.empty()) {
        std::cout << "2. Is '" << strB << "' contained in '" << strA << "'? "
                  << "Yes, at index" << (matches.size() > 1 ? "es" : "") 
                  << " " << matches.join(", ") << "."
                  << std::endl;
    }

    // 3. Determines if stringA ends with stringB
    bool q3 = (strA.compare(strA.length() - strB.length(), strB.length(), strB) == 0);

    std::cout << "3. Does '" << strA << "' end with '" << strB << "'? "
              << (q3 ? "Yes." : "No.") 
              << std::endl;
}

int main() {
    const std::string stringA = "tacoloco";
    const std::string stringB = "co";

    matchStrings(stringA, stringB);

    return 0;
}
```
This C++ program defines a function `matchStrings` that performs the same operations as your JavaScript code. The `main` function calls this function with the given strings "tacoloco" and "co", demonstrating all three string matching functionalities.
