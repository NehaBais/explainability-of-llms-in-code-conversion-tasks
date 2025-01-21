Here is the equivalent C++ code for your Java program:

```cpp
#include <iostream>
using namespace std;

int main() {
    int nbr1, nbr2;
    
    cout << "Enter two integers: ";
    cin >> nbr1 >> nbr2;
  
    if(nbr1<nbr2) 
        cout << nbr1 << " is less than " << nbr2;
      
    if(nbr1>nbr2)
         cout << nbr1 << " is greater than " << nbr2;

    if(nbr1==nbr2)
         cout << nbr1 << " is equal to " << nbr2;

    return 0;
}
```

This C++ code will get two integers from the user and then display a message based on whether the first integer is less than, equal to, or greater than the second. The `cin` statement is used to read input from the user, while `cout` statements are used to print output to the console.
