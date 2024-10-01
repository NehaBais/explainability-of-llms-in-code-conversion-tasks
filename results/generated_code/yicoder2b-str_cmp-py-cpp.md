The equivalent code in C++ would look like this:

```c++
#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>
using namespace std;

void compare(const string& a, const string& b) {
    cout << "
"<<a<<" is of type "<<typeid(a).name()<<" and 
"<<b<<" is of type "<<typeid(b).name()<<"
";
    if (a <  b)      cout << a << " is strictly less than  " << b << endl;
    if (a <= b)      cout << a << " is less than or equal to " << b << endl;
    if (a >  b)      cout << a << " is strictly greater than  "<< b << endl;
    if (a >= b)      cout << a << " is greater than or equal to " << b << endl;
    if (a == b)      cout << a << " is equal to " << b << endl;
    if (a != b)      cout << a << " is not equal to " << b << endl;
    if (&a == &b)    cout << a << " has object identity with "<< b << endl;
    if (&a != &b)    cout << a << " has negated object identity with "<< b << endl;
}

void compare(const int& a, const int& b) {
    cout << "Comparing integers "<< a <<" and "<< b <<endl;
    if (a <  b)      cout << a << " is strictly less than  " << b << endl;
    if (a <= b)      cout << a << " is less than or equal to " << b << endl;
    if (a >  b)      cout << a << " is strictly greater than  "<< b << endl;
    if (a >= b)      cout << a << " is greater than or equal to " << b << endl;
}

int main() {
   compare("YUP", "YUP");
   compare("BALL", "BELL");
   compare(24, 123);
   return 0;
}
```
This code does the same operations as your Python code. It uses C++ features such as `string` and `typeid` for type checking. Note that C++ handles lexical comparison of strings in a slightly different way than Python. In C++, "24" is considered less than "123" because "2" < "1". Also note that the identity of references to objects should be taken into account, unlike in Python where the reference object itself would be compared.
