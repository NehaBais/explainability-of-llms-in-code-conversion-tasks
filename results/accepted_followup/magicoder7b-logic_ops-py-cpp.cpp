#include <iostream>
using namespace std;

void logic(bool a, bool b) {
  cout << "a and b: " << (a && b) << endl;
  cout << "a or b: " << (a || b) << endl;
  cout << "not a: " << !a << endl;
}

// Entry point of the program.
int main() { return 0; }