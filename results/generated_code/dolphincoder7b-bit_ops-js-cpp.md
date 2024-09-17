Below is the equivalent C++ code for the given JavaScript code:

```cpp
#include <iostream>
using namespace std;
int main() {
   int a, b;

   cout << "Enter two integers: ";
   cin >> a >> b;

   cout << endl << "a AND b:  " << (a & b) << endl;
   cout << "a OR b:   " << (a | b) << endl;
   cout << "a XOR b:  " << (a ^ b) << endl;
   cout << "NOT a:    " << ~a << endl;
   cout << "a  << b:  " << (a << b) << endl; // left shift
   cout << "a  >> b:  " << (a >> b) << endl;  // arithmetic right shift
   cout << "a  >>> b: " << (a >>> b) << endl;  // logical right shift
}
```
Please note that the bitwise left shift operator in C++ is different from JavaScript. In JavaScript, you can simply use `<<` and it will work for both types of shifts, left or right. On the other hand, in C++, there are two separate operators: `<<` for left shift and `>>>` for arithmetic right shift. The `>>>` operator always performs an arithmetic right shift operation on signed integers, which is the behavior that you wanted in JavaScript.
