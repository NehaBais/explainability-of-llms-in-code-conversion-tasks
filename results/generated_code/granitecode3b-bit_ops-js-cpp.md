Here's the C++ code that performs the same operations as the given JavaScript function:
```
#include 
using namespace std;
void bitwise(int a, int b){
   cout << "a AND b: " << (a & b) << endl;
   cout << "a OR b: " << (a | b) << endl;
   cout << "a XOR b: " << (a ^ b) << endl;
   cout << "NOT a: " << ~a << endl;
   cout << "a << b: " << (a << b) << endl; // left shift
   cout << "a >> b: " << (a >> b) << endl; // arithmetic right shift
   cout << "a >>> b: " << (a >> b) << endl; // logical right shift
}
int main(){
   int a = 10, b = 3;
   bitwise(a, b);
   return 0;
}
```
Note that in C++, the left shift operator `<<` shifts the bits of the first operand to the left by the number of bits specified by the second operand. The arithmetic right shift operator `>>` shifts the bits of the first operand to the right by the number of bits specified by the second operand, discarding any fractional part. The logical right shift operator `>>>` shifts the bits of the first operand to the right by the number of bits specified by the second operand, filling in the vacated bits with the sign bit (the most significant bit).

