 Here's the C++ code that meets the requirements: 

```cpp
#include <iostream>

using namespace std;

void printLogic(bool a, bool b) {
 cout << "a and b is " << (a && b) << endl;
 cout << "a or b is " << (a || b) << endl;
 cout << "not a is " << !a << endl;
}

int main() {
 printLogic(true, false);
 return 0;
}
```