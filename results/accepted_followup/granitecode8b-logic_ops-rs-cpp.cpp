#include
using namespace std;
void boolean_ops(bool a, bool b) {
  cout << a << " and " << b << " -> " << (a && b) << endl;
  cout << a << " or " << b << " -> " << (a || b) << endl;
  cout << a << " xor " << b << " -> " << (a ^ b) << endl;
  cout << "not " << a << " -> " << (!a) << endl;
}
int main() {
  boolean_ops(true, true);
  boolean_ops(true, false);
  boolean_ops(false, true);
  boolean_ops(false, false);
  return 0;
}