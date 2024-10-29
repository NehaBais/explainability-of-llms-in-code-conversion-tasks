#include <iostream>
using namespace std;

void boolean_ops(bool a, bool b) {
  cout << a << " and " << b << " -> " << (a && b) << endl;
  cout << a << " or " << b << " -> " << (a || b) << endl;
  // In cpp, the ^ operator is not equivalent to XOR in some languages.
  // If you are looking for logical xor then you need an extra library support
  // like boost.logic etc.
  cout << a << " xor " << b << " -> " << (a ^ b) << endl;
  cout << "not " << a << " -> " << !a << endl;
}

int main() {
  boolean_ops(true, true);
  boolean_ops(true, false);
  boolean_ops(false, true);
  boolean_ops(false, false);

  return 0;
}