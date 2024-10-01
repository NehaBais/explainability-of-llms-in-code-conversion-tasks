#include <iostream>
using namespace std;
int main() {
  int n1, n2;
  cout << "Enter first number: ";
  cin >> n1;
  cout << "Enter second number: ";
  cin >> n2;
  if (n1 < n2)
    cout << n1 << " is less than " << n2 << endl;
  else if (n1 == n2)
    cout << n1 << " is equal to " << n2 << endl;
  else
    cout << n1 << " is greater than " << n2 << endl;
  return 0;
}