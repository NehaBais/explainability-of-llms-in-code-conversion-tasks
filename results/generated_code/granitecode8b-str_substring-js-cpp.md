Here is the C++ code that implements the same functionality as the JavaScript code you provided:
```c++
#include 
#include 
using namespace std;
int main() {
 string str = "abcdefgh";
 int n = 2, m = 3;
 //  *  starting from n characters in and of m length;
 string substr_1 = str.substr(n, m); // => "cde"
 cout << substr_1 << endl;
 //  * starting from n characters in, up to the end of the string;
 string substr_2 = str.substr(n); // => "cdefgh"
 cout << substr_2 << endl;
 //  * whole string minus last character;
 string substr_3 = str.substr(0, str.length() - 1); // => "abcdefg"
 cout << substr_3 << endl;
 //  * starting from a known character within the string and of m length;
 int index = str.find('b');
 string substr_4 = str.substr(index, m); // => "bcd"
 cout << substr_4 << endl;
 //  * starting from a known substring within the string and of m length. 
 index = str.find("bc");
 string substr_5 = str.substr(index, m); // => "bcd"
 cout << substr_5 << endl;
 return 0;
}
```
Note that in C++, the `string::substr` function takes two arguments: the starting index and the length of the substring. The `string::find` function returns the index of the first occurrence of the specified character or substring, or `string::npos` if it is not found. Also, the `string::length` function returns the length of the string in characters, not bytes.

