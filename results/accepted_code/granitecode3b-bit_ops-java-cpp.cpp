#include
using namespace std;

void bitwise(int a, int b) {
  cout << "a AND b: " << (a & b) << endl;
  cout << "a OR b: " << (a | b) << endl;
  cout << "a XOR b: " << (a ^ b) << endl;
  cout << "NOT a: " << ~a << endl;
  cout << "a << b: " << (a << b) << endl;   // left shift
  cout << "a >> b: " << (a >> b) << endl;   // arithmetic right shift
  cout << "a >>> b: " << (a >>> b) << endl; // logical right shift
  cout << "a rol b: " << Integer.rotateLeft(a, b)
       << endl; // rotate left, Java 1.5+
  cout << "a ror b: " << Integer.rotateRight(a, b)
       << endl; // rotate right, Java 1.5+
}
int main() {
  int a = 10, b = 3;
  bitwise(a, b);
  return 0;
}