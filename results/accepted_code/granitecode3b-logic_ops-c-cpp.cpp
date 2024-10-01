#include
using namespace std;
int main() {
  int a, b;
  cout << "Enter two logical values (0 or 1): ";
  cin >> a >> b;

  cout << "a and b is " << (a && b) << endl;
  cout << "a or b is " << (a || b) << endl;
  cout << "not a is " << (!a) << endl;

  return 0;
}