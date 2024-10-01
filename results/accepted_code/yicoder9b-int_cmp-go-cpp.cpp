#include <iostream>
using namespace std;
int main() {
  int n1, n2;
  cout << "enter number: ";
  cin >> n1;
  cout << "enter number: ";
  cin >> n2;

  if (n1 < n2) {
    cout << n1 << " less than " << n2 << endl;
  } else if (n1 == n2) {
    cout << n1 << " equal to " << n2 << endl;
  } else if (n1 > n2) {
    cout << n1 << " greater than " << n2 << endl;
  }

  return 0;
}