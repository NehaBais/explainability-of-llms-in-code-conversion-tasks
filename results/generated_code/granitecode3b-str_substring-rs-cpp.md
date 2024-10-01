Here's the equivalent C++ code for the given Rust code snippet:
```
#include 
#include 
using namespace std;
int main() {
 string s = "abc文字化けdef";
 int n = 2;
 int m = 3;
 

 // Print 3 characters starting at index 2 (c文字)
 cout << s.substr(n, m) << endl;
 

 // Print all characters starting at index 2 (cletters化けdef)
 cout << s.substr(n) << endl;
 

 // Print all characters except the last (abc letters化けde)
 string result = "";
 for (int i = n + m - 1; i < s.length(); ++i) {
 result += s[i];
 }
 cout << result << endl;
 

 // Print 3 characters starting with 'b' (bc文)
 size_t cpos = s.find('b');
 if (cpos != string::npos) {
 cout << s.substr(cpos + m) << endl;
 }
 

 // Print 3 characters starting with "けd" (けde)
 size_t spos = s.find("けd");
 if (spos != string::npos) {
 cout << s.substr(spos + m) << endl;
 }
 return 0;
}
```
The equivalent C++ code uses the `substr` function to print substrings of the original string, and the `find` function to find the starting position of a substring within the original string. The program iterates through the characters in the original string, appending them to a new string if they fall within the specified range.

