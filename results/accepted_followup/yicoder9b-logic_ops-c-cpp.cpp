#include <iostream>
using namespace std;

void print_logic(bool a, bool b) {
  cout << "a and b is " << (a && b) << endl;
  cout << "a or b is " << (a || b) << endl;
  cout << "not a is " << !a << endl;
}

int main() {
  print_logic(true, false); // test the function with some values.
  return 0; // this indicates that the program has ended successfully.
}