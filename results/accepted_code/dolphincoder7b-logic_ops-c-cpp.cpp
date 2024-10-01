#include <iostream>
using namespace std;

void print_logic(int a, int b) {
  cout << "a and b is " << (a && b) << "\n";
  cout << "a or b is " << (a || b) << "\n";
  cout << "not a is " << (!a) << "\n";
}

int main() {
  printLogic(1, 0); // Outputs: a and b is 0, a or b is 1, not a is 0
  return 0;
}