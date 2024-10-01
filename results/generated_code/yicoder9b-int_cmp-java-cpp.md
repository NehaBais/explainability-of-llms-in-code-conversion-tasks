Below is the equivalent C++ code for the given Java code: 

```cpp
#include <iostream>
using namespace std;

int main() {
    int nbr1, nbr2;

    cout << "Enter first number: ";
    cin >> nbr1;

    cout << "Enter second number: ";
    cin >> nbr2;

    if(nbr1<nbr2)
        cout << nbr1 << " is less than " << nbr2 << endl;

    if(nbr1>nbr2)
         cout << nbr1 << " is greater than " << nbr2 << endl;

    if(nbr1==nbr2)
         cout << nbr1 << " is equal to " << nbr2 << endl; 

    return 0;
}
```

In this code, we are using `std::cin` and `std::cout` for standard input/output operations in C++. Also, note that the syntax of conditional statements remains similar across Java and C++ - the condition inside the parentheses is evaluated to either true or false, and based on it, the corresponding block of code gets executed.
