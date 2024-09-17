The equivalent C++ code would be as follows. It will perform the exact same operation but in C++ syntax:

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Please enter two integers:\n";
    cin >> a >> b;
    
    if (a < b) {
        cout << a << " is less than " << b << endl;
    } else if (a == b) {
        cout << a << " equals " << b << endl;
    } else if (a > b) {
        cout << a << " is greater than " << b << endl;
    }
    
    return 0;
}
```

In this C++ code, the `std::cin` function reads values from standard input which are entered by user. Then we use simple if else-if statements to compare those two integers and print an appropriate message depending on the result of comparison. The condition for each case is tested separately using all three comparison operators (<, == , >).

