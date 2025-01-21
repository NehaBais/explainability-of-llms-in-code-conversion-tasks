 Sure, here's the equivalent code in C++:

```cpp
#include <iostream>
using namespace std;

int main() {
    int nbr1, nbr2;

    cout << "Enter the first integer: ";
    cin >> nbr1;
    cout << "Enter the second integer: ";
    cin >> nbr2;

    if (nbr1 < nbr2)
        cout << nbr1 << " is less than " << nbr2 << endl;

    if (nbr1 > nbr2)
        cout << nbr1 << " is greater than " << nbr2 << endl;

    if (nbr1 == nbr2)
        cout << nbr1 << " is equal to " << nbr2 << endl;

    return 0;
}
```

This C++ code does the following:
1. Reads two integers from the user using `cin`.
2. Compares the two integers using if statements and outputs the appropriate message based on their relationship.
