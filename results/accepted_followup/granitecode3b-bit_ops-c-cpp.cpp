#include
using namespace std;
int main() {
  int a, b;
  cout << "Enter two integers: ";
  cin >> a >> b;

  cout << "a and b: " << a & b << endl;
  cout << "a or b: " << a | b << endl;
  cout << "a xor b: " << a ^ b << endl;
  cout << "not a: " << ~a << endl;
  cout << "a << n: " << a << " << " << b << " = " << a << " << " << b << " = "
       << a << " << " << b << endl;
  unsigned int c = a;
  cout << "c >> b: " << c >> b << endl;

  return 0;
}