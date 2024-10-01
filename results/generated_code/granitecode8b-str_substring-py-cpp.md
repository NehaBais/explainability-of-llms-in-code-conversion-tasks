Here is the converted code in C++ that satisfies the given requirements:
```c++
#include 
#include 
int main() {
 std::string s = "abcdefgh";
 int n = 2, m = 3;
 char char = 'd', chars[] = "cd";
 // starting from n=2 characters in and m=3 in length;
 std::cout << s.substr(n-1, m) << std::endl;
 // starting from n characters in, up to the end of the string;
 std::cout << s.substr(n-1) << std::endl;
 // whole string minus last character;
 std::cout << s.substr(0, s.length()-1) << std::endl;
 // starting from a known character char="d" within the string and of m length;
 int indx = s.find(char);
 std::cout << s.substr(indx, m) << std::endl;
 // starting from a known substring chars="cd" within the string and of m length. 
 indx = s.find(chars);
 std::cout << s.substr(indx, m) << std::endl;
 return 0;
}
```
Note that the C++ `std::string` class uses UTF-8 encoding by default, so it can handle any valid Unicode code point. Also, the `find()` and `substr()` methods in C++ use logical characters (code points) rather than 8-bit code units for UTF-8.

