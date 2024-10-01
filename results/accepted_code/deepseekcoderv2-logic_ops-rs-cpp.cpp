#include <iostream>
using namespace std;
void boolean_op(bool a, bool b) {
  cout << "and " << a << ", " << b << " -> " << a && b << endl;
  cout << "or" << a << " , " << b << "->" << a || b << endl;
  cout << "xor" << a << " , " << b << " ->" << (a ^ b) << endl;
  cout << "not" << a << " -> " << !a << endl;
}
int main() {
  boolean_op(true, true);
  boolean_op(true, false);
  boolean_op(false, true);
  boolean_op(false, false)
}