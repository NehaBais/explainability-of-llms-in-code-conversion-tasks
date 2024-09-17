 Here's the C++ code that meets the requirements you provided:
```
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a < b) {
        cout << a << " is less than " << b << endl;
    } else if (a == b) {
        cout << a << " is equal to " << b << endl;
    } else if (a > b) {
        cout << a << " is greater than " << b << endl;
    }

    return 0;
}
```
Note: The `<iostream>` header file is included to use the `cin` and `cout` streams. Also, the `using namespace std;` statement is used to avoid writing the `std::` prefix before all standard library types and functions in the code.
