Here is the equivalent C++ code for your requirement:
```cpp
#include <iostream>
using namespace std;

void bitwise(int a, int b){
    cout << "a AND b: " << (a & b) << endl; 
    cout << "a OR b: " << (a | b) << endl;
    cout << "a XOR b: " << (a ^ b) << endl;  
    cout << "NOT a: " << ~a << endl;   
    cout << "a << b: " << (a << b) << endl; // left shift
    // Arithmetic right shift in C++ is performed with >> operator.
    cout << "a >> b: " << (a >> b) << endl; 
    // There's no direct support for logical right shift in C++,
    // but you can get the same result using arithmetic shift on unsigned numbers.  
    cout << "a >>> b: " << ((unsigned)a >> b) << endl; 
    
    // C++11 introduced std::rotl and std::rotr functions to perform bitwise rotation.
    #if __cplusplus >= 201703L
        cout << "a rol b: " << rotl(a,b) << endl; //rotate left, C++17+
        cout << "a ror b: " << rotr(a,b) << endl; //rotate right, C++17+
    #else
       // For earlier versions of C++, you'd need to write your own rotation function.
    #endif
}
```
Please note that the functions `rotl` and `rotr` are not standard C++. If you want to use them in a portable way for all versions of C++, you might have to provide an alternative implementation on those compilers/platforms where they aren't supported (for example, pre-C++17 compilers).
