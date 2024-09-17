#include
#include
using namespace std;
int main() {
  int a, b;
  cout << "Enter two integers: ";
  cin >> a >> b;
  if (a < b) {
    cout << a << " is less than " << b << endl;
  } else if (a == b) {
    cout << a << " equals " << b << endl;
  } else {
    cout << a << " is greater than " << b << endl;
  }
  return 0;
}