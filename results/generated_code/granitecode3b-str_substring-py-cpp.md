Here's the C++ code that converts the Python code:
```cpp
#include 
#include 
using namespace std;
int main() {
 string s = "abcdefgh";
 int n, m;
 char char, chars[3];
 cin >> n >> m >> char >> chars;
 // starting from n=2 characters in and m=3 in length;
 cout << s.substr(n-1, m) << endl;
 // starting from n characters in, up to the end of the string;
 cout << s.substr(n-1) << endl;
 // whole string minus last character;
 cout << s.substr(0, s.size()-1) << endl;
 // starting from a known character char="d" within the string and of m length;
 int indx = s.find(char);
 cout << s.substr(indx, m) << endl;
 // starting from a known substring chars="cd" within the string and of m length. 
 indx = s.find(chars);
 cout << s.substr(indx, m) << endl;
 return 0;
}
```
This code uses the `substr()` function to extract substrings from the `s` string. The `index()` function is used to find the index of a specific character or substring within the string, and then the `substr()` function is used to extract the desired substring based on the index and length provided.

