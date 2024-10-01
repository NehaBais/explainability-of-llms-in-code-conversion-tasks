#include <iostream>
using namespace std;
void boolean_ops(bool a, bool b) {
  cout << (a ? "true" : "false") << " and " << (b ? "true" : "false") << " -> "
       << ((a && b) ? "true" : "false") << endl;
  cout << (a ? "true" : "false") << " or " << (b ? "true" : "false") << " -> "
       << ((a || b) ? "true" : "false") << endl;
  cout << (a ? "true" : "false") << " xor " << (b ? "true" : "false") << " -> "
       << ((a != b) ? "true" : "false") << endl;
  cout << (a ? "true" : "false") << " not -> " << ((!a) ? "true" : "false")
       << endl;
}
int main() {
  boolean_ops(true, true);
  boolean_ops(true, false);
  boolean_ops(false, true);
  boolean_ops(false, false);
  return 0;
}