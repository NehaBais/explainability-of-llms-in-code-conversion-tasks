 Here is the equivalent C++ code for your Python requirements:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "abcd";
    string str2 = "ab";

    // Determining if the first string starts with second string
    cout << (str1.substr(0, str2.size()) == str2);

    // Determining if the first string contains the second string at any location
    size_t found = str1.find(str2);
    while (found != string::npos) {
        cout << "Loc: " << found << "\n";
        found = str1.find(str2, found + 1);
    }

    // Determining if the first string ends with the second string
    cout << (str1.substr(str1.size() - str2.size()) == str2);

    return 0;
}
```
Explanation:
The code works by using C++'s `std::string`'s methods to match strings. The `substr` method is used to get substrings from the original string, and comparison (`==`) checks if two strings are equal or not. The `find` method is also used in this code to find a substring within the main string. It takes two parameters, the second one being the starting position for the search. This way, we can use it multiple times to find all occurrences of a substring in the first string. If no occurrence is found, the method returns `string::npos`, which acts as a special indicator that there's no more match.
