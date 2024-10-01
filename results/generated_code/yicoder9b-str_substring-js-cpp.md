The following code snippets are C++ translations for each requirement of the JavaScript provided:

```cpp
#include <iostream>
#include <string> 
using namespace std;

int main() {
    string str = "abcdefgh";

    // Starting from n characters in and of m length.
    {
        int n = 2, m = 3;
        cout << str.substr(n, m) << endl; // => "cde"
    }

    // Starting from n characters in, up to the end of the string.
    {
        int n = 2;
        cout << str.substr(n) << endl;  // => "cdefgh"
    }

    // Whole string minus last character.
    {
        cout << str.substr(0, str.length() - 1) << endl; // => "abcdefg"
    }

    // Starting from a known character within the string and of m length.
    {
        int n = str.find('b');  // index of 'b' in str
        int m = 3;
        cout << str.substr(n, m) << endl; // => "bcd"
    }

    // Starting from a known substring within the string and of m length. 
    {
        int n = str.find("bc");  // index of 'bc' in str
        int m = 3;
        cout << str.substr(n, m) << endl; // => "bcd"
    }

    return 0;
}
```
Note: In C++ there is no native support for Unicode. The above program works with UTF-8 and UTF-16 strings using some specific string libraries (like Boost Locale), but standard library provides functionality without full unicode support because of historical reasons. For full Unicode support it's recommended to use higher level libraries or frameworks that provide this feature.
