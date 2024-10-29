In C++, you can use the `std::cout` function to print output and `&&` , `||` and `!` are used for boolean logic operations similar to Golang's. Here's how you could implement it in C++:

```cpp
#include<iostream>
using namespace std;

void printLogic(bool a, bool b) {
    cout << "a and b is "<< (a && b) << endl;
    cout << "a or b is "<< (a || b) << endl;
    cout << "not a is "<< (!a) << endl; 
}
```
You can call this function with two boolean values. For instance: `printLogic(true, false);` will print out the results of 'and', 'or' and 'not' for arguments true and false respectively. Note that in C++ `endl` is used instead of \n to break line after each output statement.

