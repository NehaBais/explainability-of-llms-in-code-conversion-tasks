Sure! Here's the C++ code that meets your requirements:
```
#include 
using namespace std;
int main() {
 int a, b;
 cout << "Enter two logical values (0 or 1): ";
 cin >> a >> b;
 
 cout << "a and b is " << (a && b) << endl;
 cout << "a or b is " << (a || b) << endl;
 cout << "not a is " << (!a) << endl;
 
 return 0;
}
```
This code uses the `&&` and `||` operators to perform logical AND and OR operations on the two input values. The exclamation point (`!`) operator is used to negate the first value, which gives the result of "not a". The `cout` statements output the results of the logical operations.

