Here's the equivalent C++ code for the given Java code snippet:
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
  cout << "a >>> b: " << (a >>> b) << endl; // logical right shift
  cout << "a rol b: " << Integer.rotateLeft(a, b) << endl; //rotate left, Java 1.5+
  cout << "a ror b: " << Integer.rotateRight(a, b) << endl; //rotate right, Java 1.5+
}
int main(){
  int a = 10, b = 3;
  bitwise(a, b);
  return 0;
}
```
The C++ code uses the same bitwise operators as the Java code, and it also performs shifts and rotates on the first integer with the shift/rotate amount of the second integer. The main function initializes two integers `a` and `b`, and then calls the `bitwise` function to perform the specified operations on them.

