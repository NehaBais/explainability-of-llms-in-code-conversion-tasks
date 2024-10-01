The equivalent C++ code for the given Golang function would be:

```cpp
#include <iostream>
using namespace std;

void printLogic(bool a, bool b){
    cout << "a and b is " << (a && b)<< endl;
    cout << "a or b is " << (a || b)<<endl;
    cout << "not a is " << !a<< endl;
}

int main() {
    printLogic(true, false);
    return 0;
}
```
This C++ code does the same thing as your Golang function. It prints out the logical operations for two boolean values `a` and `b`. The first line gives the result of the "and" operation on `a` and `b`, the second line gives the result of an "or" operation on `a` and `b`, and the last line gives the inverse value of `a` i.e., it will be true if `a` is false and vice versa.
