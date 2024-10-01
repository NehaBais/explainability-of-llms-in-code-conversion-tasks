Converting this Rust code to C++ is a bit more difficult because string manipulation in C++ does not have features like `skip()` or `take()` found in the Rust standard library. However, you can achieve similar results with the help of iterators and substring function provided by STL (Standard Template Library).

Here's how to convert your code:

```cpp
#include <iostream>
#include <locale>  // For std::wstring_convert
#include <codecvt> // For std::wstring_convert
using namespace std;

int main() {
    wstring_convert<std::codecvt_utf8<wchar_t>> converter; 
    string s = converter.from_bytes("abc文字化けdef");
    size_t n = 2, m = 3, cpos, spos;

    // Print 3 characters starting at index 2 (c文字)
    wstring subStr = s.substr(n, m);  
    cout << converter.to_bytes(subStr) << endl; 

    // Print all characters starting at index 2 (c文字化けdef)
    subStr = s.substr(n);  
    cout << converter.to_bytes(subStr) << endl; 

    // Print all characters except the last (abc文字化けde)
    subStr = s.substr(0, s.size()-1);  
    cout << converter.to_bytes(subStr) << endl; 

    // Print 3 characters starting with 'b' (bc文)
    cpos = s.find('b'); 
    subStr = s.substr(cpos, m);   
    cout << converter.to_bytes(subStr) << endl;  

    // Print 3 characters starting with "けd" (けde)
    spos = s.find(converter.from_bytes("けd")); 
    subStr = s.substr(spos, m);   
    cout << converter.to_bytes(subStr) << endl;  
}
```

Please note that C++ does not provide a native way to iterate over the individual Unicode code points in a string. The solution uses `wstring_convert` and `codecvt_utf8` from STL to convert between UTF-8 and wide strings, which are sequence of Unicode characters. This is one of many possible solutions depending on your specific needs.
