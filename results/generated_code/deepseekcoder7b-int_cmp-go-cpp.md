The provided Go code can be translated directly into C++ without changing the core logic of the program. Here is equivalent C++ code for this problem statement:

```cpp
#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "enter number: ";
    cin >> n1;
    cout << "enter number: ";
    cin >> n2;
    
    if(n1 < n2) 
        cout<< n1 <<" less than "<< n2 <<endl;
    else if (n1 == n2)
        cout<< n1 <<" equal to "<< n2 <<endl;
    else
        cout<< n1 <<" greater than "<< n2 <<endl;
    
    return 0;
}
```
Just a quick note, in Go if statement doesn't have any condition so it behaves like switch case with a default case. In C++, there is no such thing as switch without a condition. That’s why we use `if`-`else if`-`else` structure to achieve the same result.

