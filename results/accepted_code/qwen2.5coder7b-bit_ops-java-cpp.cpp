#include <bitset>
#include <iostream>

using namespace std;

void bitwise(int a, int b) {
  cout << "a AND b: " << (a & b) << endl;
  cout << "a OR b: " << (a | b) << endl;
  cout << "a XOR b: " << (a ^ b) << endl;
  cout << "NOT a: " << (~a) << endl;

  // left shift
  unsigned long shiftedLeft = static_cast<unsigned long>(a) << b;
  cout << "a << b: " << shiftedLeft << endl;

  // arithmetic right shift
  int shiftedRightArithmetic = (int)a >> b;
  cout << "a >> b: " << shiftedRightArithmetic << endl;

  // logical right shift
  unsigned long shiftedLogical = static_cast<unsigned long>(a) >> b;
  cout << "a >>> b: " << shiftedLogical << endl;

  // rotate left
  int rotatedLeft = (a << b) | (a >> (sizeof(a) * 8 - b));
  cout << "a rol b: " << rotatedLeft << endl;

  // rotate right
  int rotatedRight = (a >> b) | (a << (sizeof(a) * 8 - b));
  cout << "a ror b: " << rotatedRight << endl;
}

int main() {
  bitwise(5, 2);
  return 0;
}