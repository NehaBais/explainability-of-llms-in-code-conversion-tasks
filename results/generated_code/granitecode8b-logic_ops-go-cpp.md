Here's the equivalent code in C++:
```
#include 
using namespace std;
void printLogic(bool a, bool b) {
 cout << "a and b is " << (a && b) << endl;
 cout << "a or b is " << (a || b) << endl;
 cout << "not a is " << (!a) << endl;
}
```
Note that the syntax for logical operators in C++ is different from Golang. In C++, the double ampersand (`&&`) represents the logical AND operator, the double pipe (`||`) represents the logical OR operator, and the exclamation mark (`!`) represents the logical NOT operator. Additionally, the `cout` statement in C++ requires a stream to be specified before the output value.

