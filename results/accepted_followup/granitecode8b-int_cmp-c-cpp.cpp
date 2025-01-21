#include
using namespace std;
int main() {
  int a, b;
  cout << "Enter two integers: ";
  cin >> a >> b;

  if (a < b) {
    cout << a << " is less than " << b << endl;
  }

  if (a == b) {
    cout << a << " is equal to " << b << endl;
  }

  if (a > b) {
    cout << a << " is greater than " << b << endl;
  }

  return 0;
}