#include
#include
using namespace std;

int main() {
  int a, b;
  cout << "Enter two integers: ";
  cin >> a >> b;
  cout << "sum:              " << a + b << endl;
  cout << "difference:       " << a - b << endl;
  cout << "product:          " << a * b << endl;
  cout << "integer quotient: " << a / b << endl; // truncates towards zero
  cout << "remainder:        " << a % b << endl; // same sign as first operand
  return 0;
}