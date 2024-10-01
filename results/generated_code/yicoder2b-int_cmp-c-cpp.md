This C code can be converted to C++ as follows:

```cpp
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;

    if (a < b)
        cout << "\n" << a << " is less than " << b << endl;
    else if(a == b)
        cout << "\n" << a << " is equal to " << b << endl;
    else 
        cout << "\n" << a << " is greater than " << b << endl;

    return 0;
}
```
This C++ code will get two integers from the user and then output whether each integer is less than, equal to or greater than the other. The 'endl' is used to insert newlines in the cout statements, which are equivalent to printf statement. If you prefer using '\n' instead of endl in cout statements, it would work the same way.
