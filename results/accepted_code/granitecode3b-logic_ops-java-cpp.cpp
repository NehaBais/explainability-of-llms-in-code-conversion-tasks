#include
using namespace std;
int main() {
  bool a, b;
  cout << "Enter two boolean values (0 or 1): ";
  cin >> a >> b;
  cout << "a AND b: " << (a && b) << endl;
  cout << "a OR b: " << (a || b) << endl;
  cout << "NOT a: " << (!a) << endl;
  return 0;
}