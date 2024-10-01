Here is the C++ code that demonstrates how to compare two strings for exact equality, inequality, lexical order, and case sensitivity:
```c++
#include 
#include 
using namespace std;
int main() {
 string a = "YUP";
 string b = "BALL";
 if (a == b) {
 cout << a << " is equal to " << b << endl;
 } else {
 cout << a << " is not equal to " << b << endl;
 }
 
 if (a != b) {
 cout << a << " is not equal to " << b << endl;
 } else {
 cout << a << " is equal to " << b << endl;
 }
 
 if (a < b) {
 cout << a << " is lexically less than " << b << endl;
 } else {
 cout << a << " is not lexically less than " << b << endl;
 }
 
 if (a > b) {
 cout << a << " is lexically greater than " << b << endl;
 } else {
 cout << a << " is not lexically greater than " << b << endl;
 }
 
 string c = "yup";
 string d = "YUP";
 if (c == d) {
 cout << c << " is equal to " << d << " (case sensitive)" << endl;
 } else {
 cout << c << " is not equal to " << d << " (case sensitive)" << endl;
 }
 
 string e = "yup";
 string f = "YUP";
 if (_stricmp(e.c_str(), f.c_str()) == 0) {
 cout << e << " is equal to " << f << " (case insensitive)" << endl;
 } else {
 cout << e << " is not equal to " << f << " (case insensitive)" << endl;
 }
 
 return 0;
}
```
This code also demonstrates how to compare two numeric strings as lexical numbers, rather than converting them to numbers first. It uses the `_stricmp` function from the `string` library to perform a case-insensitive comparison of two strings.

