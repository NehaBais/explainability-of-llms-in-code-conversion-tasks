#include
using namespace std;
int main() {
  bool a = true;
  bool b = true;
  cout << a << " and " << b << " -> " << (a && b) << endl;
  cout << a << " or " << b << " -> " << (a || b) << endl;
  cout << a << " xor " << b << " -> " << (a ^ b) << endl;
  cout << "! " << a << " -> " << (!a) << endl;
  return 0;
}