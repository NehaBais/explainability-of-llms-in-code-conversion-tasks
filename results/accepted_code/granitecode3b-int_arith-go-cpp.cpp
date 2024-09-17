#include
using namespace std;

int main() {
  int a, b;
  cout << "Enter two integers: ";
  cin >> a >> b;
  cout << a << " + " << b << " = " << a + b << endl;
  cout << a << " - " << b << " = " << a - b << endl;
  cout << a << " * " << b << " = " << a * b << endl;
  cout << a << " / " << b << " = " << a / b << endl; // truncates towards 0
  cout << a << " %% " << b << " = " << (a % b)
       << endl; // same sign as first operand

  return 0;
}