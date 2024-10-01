In C++, the bitwise operations can be done using '&' for AND, '|' for OR, '^' for XOR, and '~' for NOT. The left shift operation is done with "<<" and right arithmetic shift is done with ">>".
However, there’s no direct operator in C++ to perform a logical right shift as exists in some other languages (like ">>>"). The implementation of the logical right shift operation would depend on the specifics of your system architecture and binary representation of integers.
Here's how you can implement this bitwise operations in C++:
```cpp
#include <iostream>
using namespace std;

void bitwise(int a, int b){
   cout << "a AND b: " << (a & b) << endl;
   cout << "a OR b: " << (a | b) << endl;
   cout << "a XOR b: " << (a ^ b) << endl;
   cout << "NOT a: " << ~a << endl; 
   cout << "a << b: " << (a << b) << endl; // left shift  
   cout << "a >> b: " << (a >> b) << endl; // arithmetic right shift
}

int LRS(int n, int x){ 
    // Convert to unsigned before shifting to prevent sign extension.
    unsigned un = (unsigned)n;
    un >>=x ;
   return *((int*)&un);  
}
```
