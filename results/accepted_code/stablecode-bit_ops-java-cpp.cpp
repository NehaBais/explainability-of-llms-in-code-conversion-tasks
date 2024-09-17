#include <iostream>
using namespace std;

void bitwise(int a, int b) {

  cout << "a AND b: " << (a & b) << endl;
  cout << "a OR b: " << (a | b) << endl;
  cout << "a XOR b: " << (a ^ b) << endl;
  cout << "NOT a: " << ~a << endl;

  // left shift, C++ built-in operation
    cout << "a << b: " << (a << b)) << endl;

    // right arithmetic shift, C++ built-in operation
    cout << "a >> b: " << ((unsigned int) a >> (b % 32))) << endl;

    // logical right shift, C++ built-in operation.
    // Note that the '>>' operator in C++ performs an unsigned integer right
    // shift by default unless stated otherwise.
    cout << "a >>> b: " << ((unsigned int) a) >> (b % 32))) << endl;

    // rotate left
    cout << "a rol b: " << rotateLeft(a, b)) << endl;

    // rotate right
    cout << "a ror b: " << rotateRight(a, b)) << endl;
}