#include
using namespace std;
int main() {
  bool a, b;
  cout << "Enter values for a and b (0 or 1): ";
  cin >> a >> b;
  cout << "a and b: " << (a && b) << endl;
  cout << "a or b: " << (a || b) << endl;
  cout << "not a: " << (!a) << endl;
  return 0;
}