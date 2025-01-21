#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int a = 10, b = 20;
  cout << "Binary representation of " << a << ": ";
  for (int i = 31; i >= 0; i--) {
    if ((a & (1 << i)) != 0)
      cout << "1";
    else
      cout << "0";
    if (i % 4 == 0)
      cout << " ";
  }
  cout << endl;

  cout << "Binary representation of " << b << ": ";
  for (int i = 31; i >= 0; i--) {
    if ((b & (1 << i)) != 0)
      cout << "1";
    else
      cout << "0";
    if (i % 4 == 0)
      cout << " ";
  }
  cout << endl;

  return 0;
}