Below is the C++ code equivalent to your JavaScript functions. For user inputs, I'm using cin in c++. Also note that C++ doesn't need typeof operator or document.writeln for printing messages as it has its own print function (cout). 

```C++
#include <iostream>
using namespace std;
int main() {
    int a, b;
    
    // get two integers from the user
    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;
  
    if(a == b) 
        cout<< a <<" equals "<< b <<endl;
    
    if(a < b) 
        cout<< a <<" is less than "<< b <<endl;
        
    if(a > b) 
        cout<< a <<" is greater than "<< b <<endl;
    
    return 0;
}
```
This C++ code gets two integers from the user, and then compares them using three different comparison operators (==, <, >). It will print out messages stating whether the first integer is less than, equal to or greater than the second integer.

