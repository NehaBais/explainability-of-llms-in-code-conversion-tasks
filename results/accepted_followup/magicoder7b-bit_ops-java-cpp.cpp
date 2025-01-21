#include <iostream>
using namespace std;

void bitwise_operation(int a, int b) {
  cout << "a AND b: " << (a & b) << endl;
  cout << "a OR b: " << (a | b) << endl;
  cout << "a XOR b: " << (a ^ b) << endl;
  cout << "NOT a: " << ~a << endl;
  cout << "a << b: " << (a << b) << endl; // left shift
  cout << "a >> b: " << (a >> b) << endl; // arithmetic right shift
  cout << "a >>> b: " << (a >> b)
       << endl; // logical right shift, same as arithmetic right
}

int main() {
  bitwise_operation(10, 3); // Example usage
  return 0;
}