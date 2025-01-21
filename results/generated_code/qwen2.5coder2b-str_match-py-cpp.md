Below is the equivalent C++ code for the above Python function with optional extra functionalities.

```cpp
#include <iostream>
#include <string>
using namespace std;

bool startsWith(const string& str, const string& prefix) {
    return str.find(prefix) == 0;
}

bool endsWith(const string& str, const string& suffix) {
    return str.size() >= suffix.size() && str.substr(str.size() - suffix.size()) == suffix;
}

bool contains(const string& str, const string& subStr) {
    return str.find(subStr) != string::npos;
}

int find(const string& str, const string& substr, int pos = 0) {
    return str.find(substr, pos);
}

int main() {
    // Test cases
    cout << boolalpha; // Print booleans as true/false

    cout << "startsWith('abcd', 'ab'): " << startsWith("abcd", "ab") << endl;
    cout << "endsWith('abcd', 'zn'): " << endsWith("abcd", "zn") << endl;
    cout << "contains('bb', 'abab'): " << contains("bb", "abab") << endl;

    int loc = find("abab", "bb");
    if (loc != string::npos) {
        cout << "find('abab', 'bb') returns: " << loc << endl;
    } else {
        cout << "find('abab', 'bb'): Not found." << endl;
    }

    loc = find("abab", "ab", loc + 1);
    if (loc != string::npos) {
        cout << "find('abab', 'ab', 2): Returns: " << loc << endl;
    } else {
        cout << "find('abab', 'ab', 2): Not found." << endl;
    }

    return 0;
}
```
In this code:
- `startsWith` function checks if the given string starts with the specified prefix.
- `endsWith` function checks if the given string ends with the specified suffix.
- `contains` function checks if the given string contains the specified substring. 
- `find` function finds the first occurrence of the specified substring starting from a given position. If the substring is not found, it returns string::npos.

The main function uses these functions to demonstrate how they work and prints their results.
