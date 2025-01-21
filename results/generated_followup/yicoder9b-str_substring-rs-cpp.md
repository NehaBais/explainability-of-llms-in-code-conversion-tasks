The error message indicates that there are issues with the assignment operators in the lines where `spos` is used (`spos = s.find(ch)`), `subStr` is defined (`subStr = s.substr(spos, m)`) and `m` variable is declared (`size_t m = converter.toSizeT(n);`). 

The issue arises because of the use of wide character string (wstring) in the STL function that are expecting a narrow character string (string) instead. 

To fix this, we need to convert the wide character string (`s`) into a narrow character string before using it with these functions. We also need to make sure `ch` is also converted from wide character type(wchar_t) to narrow character type(char).

The corrected code block is:
```cpp
#include <iostream>
#include <string>
#include <locale>
#include <codecvt>

using namespace std;

int main() {
    // Converter from wstring to string
    wstring_convert<codecvt_utf8<wchar_t>, wchar_t> converter;

    wstring s = L"some wide char string"; // Use wide character literal for wide string.
    wchar_t ch = L'o';  // Use wide character literal for wide char.

    size_t spos = s.find(ch); 
    size_t m = converter.to_bytes(s).substr(converter.to_bytes(s).find('o')).size(); // Convert wstring to string before using with substr function.

    wstring subStr;
    if ( spos != std::wstring::npos ) {  // Check if character is found in the string.
        subStr = s.substr(spos, m);   // Use substr to get the sub-string from original wide char string.
    }

    cout << "Original wide char string: " << converter.to_bytes(s) << endl;  // Convert wstring to string before outputting it.
    cout << "Substring starting from first '"<< ch << "': " << converter.to_bytes(subStr) << endl; // Convert wstring to string before outputting it.
}
```
