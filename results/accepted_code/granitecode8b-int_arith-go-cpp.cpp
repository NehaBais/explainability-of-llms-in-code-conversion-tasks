#include
using namespace std;
int main() {
  int a, b;
  cout << "Enter two integers: ";
  cin >> a >> b;
  cout << a + b << endl;                         // sum
  cout << a - b << endl;                         // difference
  cout << a * b << endl;                         // product
  cout << static_cast(double > (a) / b) << endl; // quotient (towards 0)
  cout << a % b << endl; // remainder (same sign as first operand)
  return 0;
}