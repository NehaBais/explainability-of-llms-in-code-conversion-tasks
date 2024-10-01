The C++ version of the given code is as follows:

Note that this version uses `std::string` instead of C-style strings. This makes many things easier, such as directly using arithmetic on a string index to get another index and substrings are included in the standard library function `std::string::substr()`.

```cpp
#include <iostream>
#include <string>
using namespace std;

// Display a substring: starting from n characters in and of m length.
string substring(const string& s, size_t pos, ptrdiff_t len) {
    if (pos > s.size() || len == 0 || pos + len > s.size()) return "";
  return s.substr(pos, len);
}
// Display a substring: starting from n characters in up to the end of the string.
string sub_toend(const string& s, size_t pos) {
    if (pos > s.size()) return ""; 
  return s.substr(pos);
}
// Display a substring: whole string minus the last character.
string wholeless1(const string& s) {
  return s.substr(0,s.size()-1);
}
// Display a substring: starting from a known character within the string and of m length.
string str_fromch(const string& s, char ch, ptrdiff_t len) {
    auto pos = s.find(ch); 
    if (pos == std::string::npos) return "";
  return substring(s, pos, len);
}
// Display a substring: starting from a known substring within the string and of m length.
string str_fromstr(const string& s, const string& tgt, ptrdiff_t len) {
    auto pos = s.find(tgt); 
    if (pos == std::string::npos) return "";
  return substring(s, pos, len);
}
#define TEST(A) do {                                          \
     string r = A;                 \
      cout << ((r.empty())?"--error--":r)<<endl;	    \
  } while (0)
int main()
{
  const string s = "hello world shortest program";
  TEST( substring(s, 12, 5) );        // get "short"
  TEST( sub_toend   (s, 6));          // get "world shortest program"
  TEST( wholeless1 (s));             // "... progra"
  TEST( str_fromch (s, 'w', 5) );     // "world"
  TEST( str_fromstr(s, "ro", 3) );    // "rog"
  return 0;                           \
}
```
