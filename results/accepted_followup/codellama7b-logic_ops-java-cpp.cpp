#include <iostream>
using namespace std;

int main() {
  bool a = true;
  bool b = false;
  logic(a, b);
  return 0;
}

void logic(bool a, bool b) {
  cout << "a AND b: " << (a && b) << endl;
  cout << "a OR b: " << (a || b) << endl;
  cout << "NOT a: " << !a << endl;
}