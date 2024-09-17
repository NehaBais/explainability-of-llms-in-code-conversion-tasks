#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);

  cout << "sum:              " << a + b << endl;
  cout << "difference:       " << a - b << endl;
  cout << "product:          " << a * b << endl;
  cout << "integer quotient: " << a / b << endl; // truncates towards zero
  cout << "remainder:        " << a % b << endl; // same sign as first operand

  return 0;
}