#include <iostream>

using namespace std;

void printLogic(bool A, bool b) {
  cout << "A and b is " << (A && b) << endl;
  cout << "A or b is " << (A || b) << endl;
  cout << "not a is " << !A << endl;
}

int main() {
  bool A = true;  // replace with your boolean values here
  bool B = false; // replace with your boolean values here
  printLogic(A, B);
  return 0;
}