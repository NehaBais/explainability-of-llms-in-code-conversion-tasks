```cpp
#include <iostream>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int division = a / b;
    int remainder = a % b;

    cout << "a + b = " << sum << endl;
    cout << "a - b = " << difference << endl;
    cout << "a * b = " << product << endl;
    cout << "quotient of a / b = " << division << endl;  // truncates towards 0
    cout << "remainder of a / b = " << remainder << endl;  // same sign as first operand

    return 0;
}
```
