#include <bits/stdc++.h>
using namespace std;

void bitwise(int a, int b) {
  // Performing Bitwise AND on two integers
  cout << "a AND b: " << (a & b) << endl;

  // Performing Bitwise OR on two integers
  cout << "a OR b: " << (a | b) << endl;

  // Performing Bitwise XOR on two integers
  cout << "a XOR b: " << (a ^ b) << endl;

  // Performing Bitwise NOT on first integer
  cout << "NOT a: " << ~a << endl;

  // Performing Left Shift on the first integer with a shift/rotate amount of
  // the second integer
  cout << "a << b: " << (a << b) << endl; // left shift

  // Performing Right Shift on the first integer with a shift/rotate amount of
  // the second integer
  cout << "a >> b: " << (a >> b) << endl; // arithmetic right shift

  // Performing Logical Right Shift on the first integer with a shift/rotate
  // amount of the second integer
  cout << "a >>> b: " << (a >>> b) << endl; // logical right shift

  // Performing Rotate Left on the first integer with a shift/rotate amount of
  // the second integer, Java 1.5+
  cout << "a rol b: " << rotateLeft(a, b) << endl;

  // Performing Rotate Right on the first integer with a shift/rotate amount of
  // the second integer, Java 1.5+
  cout << "a ror b: " << rotateRight(a, b) << endl;
}

int main() {
  bitwise(2, 3); // replace 2 and 3 with any two integers
  return 0;
}