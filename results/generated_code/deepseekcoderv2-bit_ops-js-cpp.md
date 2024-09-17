Answer: The code below is the C++ version of JavaScript’s function bitwise.

```
// Bitwise operation on int a, and unsigned int b 
void bitwise(int a, unsigned int b) { 
   cout << "a AND b: "<< (a & b) << endl; 
   cout << "a OR b: " << (a | b) << endl; 
   cout << "a XOR b: " << (a ^ b) << endl; 
   cout << "NOT a: " << (~a) << endl; 
   cout << "a << b: "<< (a << b) << endl; // Left shift on int is arithmetic right shift. 
   cout << "a >> b: " << (a >> b) << endl; // Right Shift on int is logical right shift. 
   cout << "a >>> b: " << (unsigned int)(a >> b) << endl; 
} 
```

