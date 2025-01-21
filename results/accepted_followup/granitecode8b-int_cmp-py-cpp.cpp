#include
using namespace std;
int main() {
  int a = 0, b = 0;

  cout << "Enter value of a: ";
  cin >> a;

  cout << "Enter value of b: ";
  cin >> b;

  if (a < b) {
    cout << "a is less than b" << endl;
  } else if (a > b) {
    cout << "a is greater than b" << endl;
  } else if (a == b) {
    cout << "a is equal to b" << endl;
  }

  return 0;
}