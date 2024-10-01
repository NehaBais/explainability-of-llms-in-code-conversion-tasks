Here's the C code that converts the Rust code you provided:
```c
#include 
#include 
int main() {
 std::string s = "abc文字化けdef";
 int n = 2;
 int m = 3;
 
 // Print 3 characters starting at index 2 (c文字)
 std::cout << s.substr(n, m) << std::endl;
 
 // Print all characters starting at index 2 (clettersizeけdef)
 std::cout << s.substr(n) << std::endl;
 
 // Print all characters except the last (abc lettersizeけde)
 std::string res = "";
 for (int i = s.size() - 1; i > 0; --i) {
 if (s[i] != s[i-1]) {
 res += s[i];
 } else {
 break;
 }
 }
 std::cout << res << std::endl;
 
 // Print 3 characters starting with 'b' (bc文)
 int cpos = s.find('b');
 if (cpos != std::string::npos) {
 std::cout << s.substr(cpos + m) << std::endl;
 }
 
 // Print 3 characters starting with "けd" (けde)
 int spos = s.find("けd");
 if (spos != std::string::npos) {
 std::cout << s.substr(spos + m) << std::endl;
 }
 
 return 0;
}
```
This C code uses the `substr` function to extract substrings from the `s` string, and the `find` function to find the starting position of a substring within the string. The extracted substrings are then printed using `std::cout`.

