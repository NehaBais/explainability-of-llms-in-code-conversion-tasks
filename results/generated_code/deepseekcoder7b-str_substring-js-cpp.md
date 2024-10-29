Below is an equivalent C++ code for your JavaScript snippet. Since there are no built-in substrings in C++, it uses `std::string::substr` and `std::basic_string::find` methods instead. Please note that working with Unicode strings using native C++ can be complex due to the lack of support for UTF-8/16 standard libraries.

```c++
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "abcdefgh";
    
    int n = 2, m = 3;
  
    // starting from n characters in and of m length;
    cout << str.substr(n, m) << endl;  // => "cde"
    
    // starting from n characters in, up to the end of the string;
    cout << str.substr(n) << endl;  // => "cdefgh"
  
    // whole string minus last character;
    cout << str.substr(0, str.length() - 1) << endl;  // => "abcdefg"
    
    // starting from a known character within the string and of m length;
    cout << str.substr(str.find('b'), m) << endl;  // => "bcd"
  
    // starting from a known substring within the string and of m length;
    cout << str.substr(str.find("bc"), m) << endl;  // => "bcd"
    
    return <｜begin▁of▁sentence｜>0;
}
```
Note: The `std::basic_string` class template is a container for objects that handle storage of elements of type charT in an array. It provides member functions to access, manipulate and inspect its contents. For details see [cppreference](http://en.cppreference.com/w/cpp/string/basic_string).

