Sure, here's the C++ code that accomplishes the same task:
```c++
#include 
using namespace std;
 
int main() {
    int nbr1, nbr2;
 
    cout << "Enter first integer: ";
    cin >> nbr1;
 
    cout << "Enter second integer: ";
    cin >> nbr2;
 
    if(nbr1 < nbr2)
        cout << nbr1 << " is less than " << nbr2 << endl;
    else if(nbr1 > nbr2)
        cout << nbr1 << " is greater than " << nbr2 << endl;
    else
        cout << nbr1 << " is equal to " << nbr2 << endl;
 
    return 0;
}
```
In this C++ code, we first prompt the user to enter two integers using the `cout` and `cin` statements. We then use an if-else statement to compare the two integers based on their values. If the first integer is less than the second integer, we output a message stating that the first integer is less than the second integer. If the first integer is greater than the second integer, we output a message stating that the first integer is greater than the second integer. If the two integers are equal, we output a message stating that the two integers are equal.

