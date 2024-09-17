Here's the C++ code that achieves the same result:
```
#include 
using namespace std;
 
int main() {
 int a, b;
 
 cout << "Enter value of a: ";
 cin >> a;
 
 cout << "Enter value of b: ";
 cin >> b;
 
 if (a < b) {
 cout << "a is less than b" << endl;
 }
 else if (a > b) {
 cout << "a is greater than b" << endl;
 }
 else {
 cout << "a is equal to b" << endl;
 }
 
 return 0;
}
```
The C++ code reads two integers from the user and then uses an `if-else` statement to compare them. The conditions are checked in order, so if the first condition is true, the corresponding message is printed and the program exits. If none of the conditions are met, the program moves on to the next condition and checks again.

