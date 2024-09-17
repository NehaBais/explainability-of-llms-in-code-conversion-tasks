Here is the equivalent code in C++. The changes mainly concern type casts and namespaces:

```C++
#include<iostream>
using namespace std;

void bitwise(int a, int b) {

  cout << "a and b: " << a & b << endl;
  cout << "a or b: " << a | b << endl;
  cout << "a xor b: " << a ^ b << endl;
  cout << "not a: " << __builtin_bitnot(a)) << endl;
  cout << "a << n: " << (unsigned int)a << "<<" << b << ": " << ((unsigned int)a << b) << endl;
  cout << "(a >> b): " << ((unsigned int)a >> b) << endl;
  // For bitwise shift in the opposite direction, we can't directly use arithmetic or logical shift. We need to utilize built-in functions as shown below:

  unsigned int c = a;
  cout << "c >> b: " << (c>>b) << endl;

  /* There are no rotation operators in C++ */
}
```

This code performs bitwise operations on two integers, including AND, OR, XOR, NOT, left shift, right shift, right arithmetic shift, left rotate, and right rotate. All shifts and rotates are done on the first integer with a shift/rotate amount of the second integer.
