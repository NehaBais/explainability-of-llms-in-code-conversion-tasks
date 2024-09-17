#include
using namespace std;
void bitwise(int a, int b) {
  cout << "a and b: " << (a & b) << endl;
  cout << "a or b: " << (a | b) << endl;
  cout << "a xor b: " << (a ^ b) << endl;
  cout << "not a: " << (~a) << endl;
  cout << "a << n: " << (a << b) << endl; // left shift
  cout << "a >> n: " << (a >> b)
       << endl; // on most platforms: arithmetic right shift
  unsigned int c = a;
  cout << "c >> b: " << (c >> b) << endl; // logical right shift

  // there are no rotation operators in C, so we'll simulate them using bitwise
  // operations
  unsigned int mask = (1 << b) - 1;
  unsigned int rotated_left = ((a << b) & mask) | (a >> (32 - b));
  cout << "rotated left: " << rotated_left << endl;

  unsigned int rotated_right = ((a >> b) & mask) | (a << (32 - b));
  cout << "rotated right: " << rotated_right << endl;

  return 0;
}
int main() {
  bitwise(10, 5); // example usage
  return 0;
}