#include
using namespace std;
int main() {
  int a, b;
  cout << "Enter two integers: ";
  cin >> a >> b;
  if (b == 0) {
    cout << "Error: Division by zero." << endl;
    return 1;
  }
  int sum = a + b;
  int diff = a - b;
  int prod = a * b;
  int quot = a / b; // Truncates towards zero
  int rem = a % b;  // Remainder has the same sign as the first operand
  cout << "Sum: " << sum << endl;
  cout << "Difference: " << diff << endl;
  cout << "Product: " << prod << endl;
  cout << "Quotient: " << quot << endl;
  cout << "Remainder: " << rem << endl;
  return 0;
}