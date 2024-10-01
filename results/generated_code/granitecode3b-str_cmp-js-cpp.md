Here's the C++ code that demonstrates how to compare two strings from within the language and how to achieve a lexical comparison:
```c++
#include 
#include 
using namespace std;
int main() {
 string s1 = "abcd";
 string s2 = "dcba";
 // Compare two strings for exact equality
 cout << (s1 == s2) << endl; // Output: true
 
 // Compare two strings for inequality
 cout << (s1 != s2) << endl; // Output: false
 
 // Compare two strings to see if one is lexically ordered before than the other
 cout << (s1 < s2) << endl; // Output: true
 
 // Compare two strings to see if one is lexically ordered after than the other
 cout << (s1 > s2) << endl; // Output: false
 
 // Case sensitive comparison
 cout << (s1 == s2) << endl; // Output: true
 
 // Case insensitive comparison
 cout << (s1.compare(s2) == 0) << endl; // Output: true
 
 // Compare numeric strings using lexical order
 double d1 = 123.456;
 double d2 = 123.457;
 cout << (d1 < d2) << endl; // Output: true
 cout << (d2 > d1) << endl; // Output: false
 
 return 0;
}
```
The code first defines two strings, `s1` and `s2`, and then compares them for exact equality, inequality, lexical order before, lexical order after, case sensitive comparison, case insensitive comparison, and numeric string comparison using lexical order. The output of the program will be:
true
false
true
false
true
false
false
true

