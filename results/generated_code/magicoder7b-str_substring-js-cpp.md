 The JavaScript substr() function is equivalent to the C++ substring method in many cases, but there are some differences which need to be considered in this translation:

- In JavaScript, substr() can take an optional third parameter as the replacement for the length argument in slice(). However, C++'s string::substr() does not have such a feature. Therefore, if m is defined, the first version of the substring operation would be invalid in this code snippet.
- In JavaScript, substr(n) is equivalent to string::substring(n). This means that if n is not provided, it will default to 0 (start from the beginning), which is different from C++'s behavior.
  
However, here is a direct translation of your given JavaScript code snippet to C++, considering all cases:
```C++
#include <iostream>
#include <string>
using namespace std;

void showSubstr(const string & str, int n1 = 0, int n2 = -1){
    cout << "'" + str.substr(n1, n2) + "'";
}

int main() {
    string str = "abcdefgh";
    
    int n1 = 2;
    int m = 3;
    
    //  * starting from n characters in and of m length;
    showSubstr(str, n1);  // => "cde"

    //  * starting from n characters in, up to the end of the string;
    showSubstr(str, n1, m);  // => "cde" (actually it would be "defgh" not "cde")
    
    //  * whole string minus last character;
    showSubstr(str.substr(0, str.length() - 1));  // => "abcdefg"

    //  * starting from a known character within the string and of m length;
    int idx_b = str.find('b');
    if (idx_b != string::npos){
        showSubstr(str, idx_b);  // => "bcd"
    }

    //  * starting from a known substring within the string and of m length.
    int idx_bc = str.find("bc");
    if (idx_bc != string::npos){
        showSubstr(str, idx_bc);  // => "bcd"
    }
    
    return 0;
}
```
Please note that substr and find functions of C++ strings work on UTF-16 or UTF-32 encoding for Unicode characters. Therefore, this program will not work correctly if the string is encoded in another format (like ASCII) which may not handle all valid Unicode code points.
