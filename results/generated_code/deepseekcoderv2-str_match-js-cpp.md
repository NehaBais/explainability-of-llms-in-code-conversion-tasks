 Sure, here is the equivalent code in C++:

```cpp
#include <iostream>
#include <string>
#include <vector>
#include <regex>

int main() {
    std::string stringA = "tacoloco";
    std::string stringB = "co";
    std::vector<int> q2matches;

    // stringA starts with stringB
    bool q1 = stringA.substr(0, stringB.length()) == stringB;

    // stringA contains stringB
    int q2 = stringA.find(stringB);

    // multiple matches
    std::regex q2multi(stringB, std::regex_constants::grep);
    std::smatch match;
    while (std::regex_search(stringA, match, q2multi)) {
        q2matches.push_back(match.position());
        stringA = match.suffix();
    }

    // stringA ends with stringB
    bool q3 = stringA.substr(stringA.length() - stringB.length()) == stringB;

    std::cout << "1: Does '" << stringA << "' start with '" << stringB << "'? " << (q1 ? "Yes." : "No.") << std::endl;
    
    if (q2 != std::string::npos) {
        std::cout << "2: Is '" << stringB << "' contained in '" << stringA << "'? Yes, at index " << q2 << "." << std::endl;
        if (!q2matches.empty()) {
            std::cout << "   In fact, it happens " << q2matches.size() << " times within '" << stringA << "', at indices ";
            for (size_t i = 0; i < q2matches.size(); ++i) {
                if (i > 0) std::cout << ", ";
                std::cout << q2matches[i];
            }
            std::cout << "." << std::endl;
        }
    } else {
        std::cout << "2: Is '" << stringB << "' contained in '" << stringA << "'? No." << std::endl;
    }
    
    std::cout << "3: Does '" << stringA << "' end with '" << stringB << "'? " << (q3 ? "Yes." : "No.") << std::endl;

    return 0;
}
```

### Explanation:
1. **Starting with the first string**: We use `substr` to extract a substring from `stringA` that is the same length as `stringB`. If this substring matches `stringB`, then `stringA` starts with `stringB`.
2. **Containing the second string**: We use `find` to check if `stringB` exists in `stringA`. If it does, `find` returns the index of the first occurrence; otherwise, it returns `std::string::npos`.
3. **Ending with the second string**: Similarly, we extract a substring from the end of `stringA` that is the same length as `stringB`. If this substring matches `stringB`, then `stringA` ends with `stringB`.
4. **Handling multiple occurrences**: We use a regular expression to find all occurrences of `stringB` in `stringA`. The `std::smatch` object captures the positions of these occurrences, which we store in the vector `q2matches`.
5. **Output**: The results are printed based on the conditions and indices found.

This C++ code mirrors the functionality of the provided JavaScript code, handling string matching as specified.
