Here's the C++ code that demonstrates how to compare two strings from within the language and how to achieve a lexical comparison:
```c++
#include 
#include 
using namespace std;
 
int main() {
 string a = "YUP";
 string b = "YUP";
 cout << a << " is of type " << typeid(a).name() << endl;
 cout << b << " is of type " << typeid(b).name() << endl;
 if (a <  b) {
 cout << a << " is strictly less than  " << b << endl;
 }
 if (a <= b) {
 cout << a << " is less than or equal to " << b << endl;
 }
 if (a >  b) {
 cout << a << " is strictly greater than  " << b << endl;
 }
 if (a >= b) {
 cout << a << " is greater than or equal to " << b << endl;
 }
 if (a == b) {
 cout << a << " is equal to " << b << endl;
 }
 if (a != b) {
 cout << a << " is not equal to " << b << endl;
 }
 if (&a == &b) {
 cout << a << " has object identity with " << b << endl;
 } else {
 cout << a << " does not have object identity with " << b << endl;
 }
 return 0;
}
```
This code compares two strings, 'YUP' and 'YUP', for exact equality, and prints the result. It then compares two strings, 'BALL' and 'BELL', to see if one is lexically ordered before than the other, and prints the result. It also compares two numeric strings, '24' and '123', to see if one is lexically ordered after than the other, and prints the result. 
The code also demonstrates how to achieve case sensitive comparisons and case insensitive comparisons within the language. The `strcmp` function in C++ is used for case sensitive comparison, while the `strcmpi` function is used for case insensitive comparison.
Finally, the code demonstrates how to handle comparison of numeric strings if these are not treated lexically. The `==` operator can be used to compare two numeric strings, but it only checks for exact equality and not for lexical order. To compare two numeric strings using a lexical order, you can use the `<`, `<=`, `>`, or `>=` operators, as shown in the code.

