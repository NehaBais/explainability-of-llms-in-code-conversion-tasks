Sure! Here's the converted code in C++:
```c++
#include 
using namespace std;
int main() {
 int a, b;
 cout << "Enter two integers: ";
 cin >> a >> b;
 
 cout << "a and b: " << a & b << endl;
 cout << "a or b: " << a | b << endl;
 cout << "a xor b: " << a ^ b << endl;
 cout << "not a: " << ~a << endl;
 cout << "a << n: " << a << " << " << b << " = " << a << " << " << b << " = " << a << " << " << b << endl;
 unsigned int c = a;
 cout << "c >> b: " << c >> b << endl;
 
 return 0;
}
```
This code uses the bitwise AND, OR, and XOR operators (`&`, `|`, and `^`), as well as the bitwise NOT operator (`~`), left shift (`<<`), right shift (`>>`), and logical right shift (`>>`) to perform these operations on two integers. The shift amount is taken from the second integer.
Note that there are no rotation operators in C++, so the code uses a different approach to achieve the same result as the original C code. The `c >> b` line performs a logical right shift, which means it will only shift the bits to the right and fill the leftmost bits with zeros. This is equivalent to the original C code's `c >> b` operation.

