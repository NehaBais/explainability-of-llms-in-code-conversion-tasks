Below is a C++ version of your JavaScript code:

```C++
#include <iostream>
#include <string>

using namespace std;

int main() {
    wstring str = L"abcdefgh";

    int n = 2;
    int m = 3;

    // * starting from n characters in and of m length
    wcout << str.substr(n, m) << endl;   // => "cde"

    // * starting from n characters in, up to the end of the string
    wcout << str.substr(n) << endl;     // => "cdefgh"
    
    // * whole string minus last character
    wcout << str.substr(0, str.length() - 1) << endl;   // => "abcdefg"

    // * starting from a known character within the string and of m length
    int index = str.find(L'b');
    if (index != wstring::npos) {
        wcout << str.substr(index, m) << endl; // => "bcd"
    }

    // * starting from a known substring within the string and of m length.
    index = str.find(L"bc");
    if (index != wstring::npos) {
        wcout << str.substr(index, m) << endl; // => "bcd"
    }
    
    return 0;
}
```

Please note that in C++, we use wide strings (`wstring`) to handle Unicode characters. 

The `substr` function is used just like in JavaScript, taking the starting index and length as parameters.

To find a specific character or substring within a string, we use the `find` method which returns the index of the first occurrence. If the character/substring isn't found it will return `std::wstring::npos`.
