#include
using namespace std;
void logic(bool a, bool b) {
  cout << "a AND b: " << (a && b) << endl;
  cout << "a OR b: " << (a || b) << endl;
  cout << "NOT a: " << (!a) << endl;
}
int main() {
  logic(true, false);  // Output: a AND b: 0 a OR b: 1 NOT a: 0
  logic(false, true);  // Output: a AND b: 0 a OR b: 1 NOT a: 1
  logic(true, true);   // Output: a AND b: 1 a OR b: 1 NOT a: 0
  logic(false, false); // Output: a AND b: 0 a OR b: 0 NOT a: 1
  return 0;
}