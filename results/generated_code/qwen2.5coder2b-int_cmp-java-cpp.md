Here's the equivalent code in C++:

```cpp
#include <iostream>
using namespace std;

int main()
{
    int nbr1, nbr2;
    
    cout << "Enter two integers: ";
    cin >> nbr1 >> nbr2;

    if(nbr1<nbr2)
        cout << nbr1 << " is less than " << nbr2 << endl;

    if(nbr1>nbr2)
        cout << nbr1 << " is greater than " << nbr2 << endl;

    if(nbr1==nbr2)
        cout << nbr1 << " is equal to " << nbr2 << endl;

    return 0;
}
```

In this C++ code, we read two integers from the user using `cin` and then compare them using `if`, `else if`, and `else`. The conditions check for less than, greater than, and equal to.
