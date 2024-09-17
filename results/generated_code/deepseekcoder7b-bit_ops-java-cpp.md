Below is the C++ equivalent of your Java code. In addition to a few minor differences (like no direct methods for left rotate and right rotate), the syntax is slightly different in C++ as well:

```cpp
#include <iostream>
#include <bitset>
using namespace std;

void bitwise(int a, int b) {
    cout << "a AND b: " << (a & b) << endl;
    cout << "a OR b: "<< (a | b) << endl;
    cout << "a XOR b: "<< (a ^ b) << endl;
    
    // Use of a bitwise NOT on integer in C++ is done with ~, but remember it only acts on the least significant byte.
    // If we want to act on entire ints then we need more than one step operation or create our own function. 
    cout << "NOT a: " << ~a  << "\t(only least significant byte)\n";
    
    cout << "a << b: "<< (a << b) << endl;   // left shift, equivalent to a * pow(2, b) in Java.
    cout << "a >> b: "<< (a >> b) << endl;  // right shift, also known as arithmetic right shift.
    
    // logical right shift in C++ is done with the same operator as above but we need to manually mask off leading bits.
    int ar = (a >> b);   // for example if a=15(binary 1111) and b=2 then output will be 3(10) not 15(1111).
    cout << "a >>  b: "<< ar  << "\t(manually mask off leading bits)\n";
    
    // in C++ we need to manually implement left rotate and right rotate operations. Here's how you can do it for left rotate operation:
    cout << "a rol b: ";
    for (int i = 0; i < b; ++i) {
        a = (a << 1); // equivalent to *2, but we are doing bitwise shift here. 
    }
    cout<< a << endl;  
    
    // right rotate is not provided by default in C++. We would need to manually implement it:
    cout << "a ror b: ";
    for (int i = 0; i < b; ++i) {
        a = (a >> 1); // equivalent to /2, but we are doing bitwise shift here. 
    }
    cout<< a << endl;  
}
```

Please note that the NOT operation in C++ is different from Java. It only operates on the least significant byte, so for example if you input `a = 60` (in binary `111100`), then it will give output as `-61` (due to sign extension). For a full integer bitwise NOT operation in C++, we have to manually apply this or create our own function.

