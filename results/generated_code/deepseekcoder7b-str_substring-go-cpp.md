In C++, you can use the `std::string::substr()` function to get substrings from a string. The range of indices in this function starts at 0 and is half-open (like Python's slicing), which means that end index is not included in the returned substring. Also, C++ does not have built-in support for Unicode strings so you need to use some libraries like ICU or Boost to handle them properly.

Here's a possible conversion of your Go code into C++:
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "ABCDEFGH";
    int n = 2, m = 3;
    
    // for reference
    cout << "Index:  01234567\n";
    cout << "String: "<< s << endl;
    
    // starting from n characters in and of m length
    cout << "Start " << n << ", length " << m <<":    "<< s.substr(n,m) << endl;
    
    // starting from n characters in, up to the end of the string
    cout << "Start " << n <<", to end:      "<< s.substr(n) << endl;
        
    // whole string minus last character
    cout << "All but last:        " << s.substr(0,s.length()-1) << endl;
    
    // starting from a known character within the string and of m length
    size_t dx = s.find('D');
    if (dx != std::string::npos){
        cout << "Start 'D', length "<< m <<":   "<< s.substr(dx,m) << endl; 
    }
    
    // starting from a known substring within the string and of m length
    size_t sx = s.find("DE");
    if (sx != std::string::npos){
        cout << "Start \"DE\", length "<< m <<":  "<< s.substr(sx,m) << endl;  
    }
    
    return 0;
}
```
This program should work for all valid unicode code points whether in the Basic Multilingual Plane or above it, because C++ strings are not restricted to the BMP and can contain any Unicode code point. The string slicing is performed based on rune (code point) count rather than byte index, as required by your question.

