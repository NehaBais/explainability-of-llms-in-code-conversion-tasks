The C++ equivalent of the provided Rust code is as follows. Bitwise NOT (`~`) does not exist in C, so I have used `-a -1` to get bitwise negation. Left rotate and right rotate operations are complex due to lack of builtin rotation operators in C/C++, hence they need custom functions:

```cpp
#include<iostream>
using namespace std;
 
// Function to left rotate n by d positions
unsigned char leftRotate(unsigned char n, unsigned int d) {  
    return (n << d) | (n >> (8 - d));  
}  

// Function to right rotate n by d positions
unsigned char rightRotate(unsigned char n, unsigned int d) { 
    return (n >> d) | (n << (8 - d));  
}  
 
int main() {
    unsigned char a = 105; // value of 'a' from 0 to 255
    unsigned char b = 91; // value of 'b' from 0 to 255

    cout << "a      = ";
    for (int i = 7; i >= 0; --i) {
        cout << ((a & (1 << i)) ? 1 : 0);
    }
    cout << "\n";
    
    cout << "b      = ";
    for (int i = 7; i >= 0; --i) {
        cout << ((b & (1 << i)) ? 1 : 0);
    }
    cout << "\n";

    unsigned char c = a | b;
    cout << "a | b  = ";
    for (int i = 7; i >= 0; --i) {
        cout << ((c & (1 << i)) ? 1 : 0);
    }
    cout << "\n";  
    
    c = a & b;
    cout << "a & b  = ";
    for (int i = 7; i >= 0; --i) {
        cout << ((c & (1 << i)) ? 1 : 0);
    }
    cout << "\n";  
    
    c = a ^ b;
    cout << "a ^ b  = ";
    for (int i = 7; i >= 0; --i) {
        cout << ((c & (1 << i)) ? 1 : 0);<｜begin▁of▁sentence｜>:q<｜end▁of▁sentence｜><｜begin▁of▁sentence｜>/C++-bitwise_operators_on_integers.git</sidenote>  
    
    c = -a - 1;
    cout << "!a     = ";
    for (int i = 7; i >= 0; --i) {
        cout << ((c & (1 << i)) ? 1 : 0);
    }
    cout << "\n";  
    
    c = a << 3;
    cout << "a << 3 = ";
    for (int i = 7; i >= 0; --i) {
        cout << ((c & (1 << i)) ? 1 : 0);
    }
    cout << "\n";  
    
    c = a >> 3;
    cout << "a >> 3 = ";
    for (int i = 7; i >= 0; --i) {
        cout << ((c & (1 << i)) ? 1 : 0);
    }
    cout << "\n";  
    
    unsigned int d = 2; // number of positions to rotate
    c = leftRotate(a, d);
    cout << "a << 2  = ";
    for (int i = 7; i >= 0; --i) {
        cout << ((c & (1 << i)) ? 1 : 0);
    }
    cout << "\n";  
    
    c = rightRotate(a, d);
    cout << "a >> 2  = ";
    for (int i = 7; i >= 0; --i) {
        cout << ((c & (1 << i)) ? 1 : 0);
    }
    cout << "\n";  
    
    return 0;
}
```

