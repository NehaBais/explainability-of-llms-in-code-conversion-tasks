#include <iostream>
using namespace std;

void logic(bool a, bool b) {
  cout << "a && b: " << (a && b) << endl;
  cout << "a || b: " << (a || b) << endl;
  cout << "!a: " << (!a) << endl;
}

int main() {
  logic(true, false); // Call the function with two boolean values.
  return 0;
}