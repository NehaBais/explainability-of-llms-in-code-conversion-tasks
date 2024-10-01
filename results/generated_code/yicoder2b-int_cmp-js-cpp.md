C++ version of your code:
```cpp
#include <iostream>
using namespace std;

void compare(int a, int b) {
    if (a == b) cout << a << " equals " << b << endl;
    else if (a < b) cout << a << " is less than " << b << endl;
    else cout << a << " is greater than " << b << endl;
}
```
In this C++ version, we used `#include <iostream>` to include the standard input output stream. The function compares two integers and prints out messages based on whether they are equal, less or greater.
