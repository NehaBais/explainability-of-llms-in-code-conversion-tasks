Sure! Here's the C++ code that converts the C code:
```c++
#include <iostream>
#include <string>
using namespace std;
 
string substring(const string& s, int n, int m) {
 if (n < 0 || m < 0) return ""; // invalid input
 if (m < 0) m = s.length() + m - n + 1; // handle negative m
 
 for (int i = 0; i < n && i < s.length(); i++) {
  if (s[i] == '\0') return ""; // string ends before n
 }
 
 string result = s.substr(n, m); // extract substring
 return result;
}
 
string str_wholeless1(const string& s) {
 return substring(s, 0, s.length() - 1); // get whole string minus the last character
}
 
string str_fromch(const string& s, char ch, int m) {
 size_t pos = s.find(ch); // find position of first occurrence of ch
 if (pos == string::npos) return ""; // no match
 return substring(s, pos, m); // extract substring starting from position
}
 
string str_fromstr(const string& s, const string& in, int m) {
 size_t pos = s.find(in); // find position of first occurrence of in
 if (pos == string::npos) return ""; // no match
 return substring(s, pos, m); // extract substring starting from position
}
 
int main() {
 string s = "hello world shortest program";
 
 cout << "substring(s, 12, 5): " << substring(s, 12, 5) << endl; // get "short"
 cout << "substring(s, 6, -1): " << substring(s, 6, -1) << endl; // get "world shortest program"
 cout << "str_wholeless1(s): " << str_wholeless1(s) << endl; // "... progra"
 cout << "str_fromch(s, 'w', 5): " << str_fromch(s, 'w', 5) << endl; // "world"
 cout << "str_fromstr(s, \"ro\", 3): " << str_fromstr(s, "ro", 3) << endl; // "rog"
 
 return 0;
}
```
In this C++ code, we use the `string` class to handle strings. We define a function called `substring` that takes three arguments: a string `s`, an integer `n`, and an integer `m`. This function returns a substring of length `m` starting from position `n` in the string `s`. If either `n` or `m` is negative, it returns an empty string.
We also define two other functions called `str_wholeless1` and `str_fromch`, which are similar to `substring`, but they extract substrings from a known character or substring instead of starting from the beginning of the string.
In the `main` function, we create a string variable `s` and assign it the value "hello world shortest program". We then use the `substring` function to get various substrings of this string. The output of these functions is printed to the console using `cout`.
Note that in C++, we use the `size_t` type for array indices, which can represent any non-negative integer value. However, in C, we often use `ptrdiff_t`, which is a signed integer type used for indexing arrays and strings. We convert the C code to C++ by replacing all occurrences of `ptrdiff_t` with `int`.

