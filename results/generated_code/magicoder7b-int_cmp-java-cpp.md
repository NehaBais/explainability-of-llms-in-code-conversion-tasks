 The equivalent C++ code would be:

```cpp
#include <iostream>
using namespace std;

int main() {
    int nbr1, nbr2;
    cout << "Enter first integer: ";
    cin >> nbr1;
    cout << "Enter second integer: ";
    cin >> nbr2;
    
    if(nbr1 < nbr2) 
        cout << nbr1 << " is less than " << nbr2 << endl;

    if(nbr1 > nbr2) 
        cout << nbr1 << " is greater than " << nbr2 << endl;
        
    if(nbr1 == nbr2) 
        cout << nbr1 << " is equal to " << nbr2 << endl;
    
    return 0;
}
```
