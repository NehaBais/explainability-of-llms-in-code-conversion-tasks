#include <iostream>
using namespace std;

void logic(bool a, bool b) {
  cout << "a AND b: " << (a && b) << endl;
  cout << "a OR b: " << (a || b) << endl;
  cout << "NOT a: " << !a << endl;
}

int main() {
  logic(true, false); // call the logic function with boolean arguments.
  return 0;
}