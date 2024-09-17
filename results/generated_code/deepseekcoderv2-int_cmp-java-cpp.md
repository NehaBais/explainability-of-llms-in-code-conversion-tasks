Answer: 
```cpp
#include <iostream>
using namespace std;

int main() {
    int nbr1, nbr2;

    cout << "Enter the first integer: ";
    cin >> nbr1;
    cout << "Enter the second integer: ";
    cin >> nbr2;

    if(nbr1<nbr2)
        cout << nbr1 << " is less than " << nbr2 << endl;
    else if (nbr1>nbr2)
        cout << nbr1 << " is greater than " << nbr2 << endl;
    else
        cout << nbr1 << " is equal to " << nbr2 << endl;
    
    return 0;
}
```
