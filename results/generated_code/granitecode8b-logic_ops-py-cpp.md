Here is the converted code from Python to C++:
```
#include 
using namespace std;
void logic(bool a, bool b) {
 cout << "a and b: " << (a && b) << endl;
 cout << "a or b: " << (a || b) << endl;
 cout << "not a: " << (!a) << endl;
}
int main() {
 logic(true, false);
 return 0;
}
```
The converted code is similar to the original Python code. It takes two logical values as input and prints the result of "and", "or", and "not" on both arguments. The "&&" operator is used for "and", the "||" operator is used for "or", and the "!" operator is used for "not". Note that the output format may be different between Python and C++ due to differences in how they handle boolean values and printing.

