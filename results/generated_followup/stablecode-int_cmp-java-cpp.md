The error generated is related to the extraneous ')' after the condition. This error occurs because there's an additional closing parenthesis ')' without a corresponding opening parenthesis '('.

To fix this issue, we need to remove the extra closing parenthesis ')' at line 13 and line 16.

Here's the corrected code:

```cpp
#include 
using namespace std;

int main() {

    int nbr1, nbr2;

    cout << "Enter first integer: ";
    cin >> nbr1;

    cout << "Enter second integer: ";
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